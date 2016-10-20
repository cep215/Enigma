//
// Created by cep215 on 18/10/16.
//

#include <iostream>
#include "EnigmaMachine.hpp"

using namespace std;


EnigmaMachine::EnigmaMachine(int argc, char **argv) {

    for(int i = 1; i <= argc - 2; i++) {
        shared_ptr <Rotor> r(new Rotor(argv[i]));
        rotors.push_back(r);
    }

    plugboard = shared_ptr <Plugboard> (new Plugboard(argv[argc - 1]));
    reflector = shared_ptr <Reflector> (new Reflector());
}

void EnigmaMachine::rotors_composition_before_reflection(int rotor_index,
                                                         int &encryption) {

    while (rotor_index != rotors.size() -  1) {
        rotors[++rotor_index] -> calculate_mapping(encryption);
    }

}

void EnigmaMachine::rotors_composition_after_reflection(int rotor_index,
                                                        int &encryption) {

    while(rotor_index != -1) {
        rotors[rotor_index--] -> calculate_inverse_mapping(encryption);
    }

}

void EnigmaMachine::perform_rotation() {

    int prev_no_of_rotations, curr_no_of_rotations;

    for(int i = 0; i < rotors.size(); i++) {
        cout << "\n" << "Rotator " << i << ": ";
        rotors[i]->display();
        cout << "\n";

        prev_no_of_rotations = (int) (rotors[i]->get_no_of_rotations()
                                      / (pow((double) NO_LETTERS, i))) % NO_LETTERS;

        rotors[i]->increment_no_of_rotations();

        curr_no_of_rotations = (int) (rotors[i]->get_no_of_rotations()
                                      / (pow((double) NO_LETTERS, i))) % NO_LETTERS;

        if (prev_no_of_rotations != curr_no_of_rotations) {
            rotors[i]->advance_rotor_one_position();
        }
    }

}


char EnigmaMachine::encode_chr(char chr) {

    bool rotors_exist = (rotors.size() != 0);

    if(!(chr >= 'A' && chr <= 'Z')) {
        exit(0);                       //TODO: Give an error message otherwise
    }

    int encryption = chr - 'A'; // integer representation of the letter to be encoded

    plugboard -> calculate_mapping(encryption);

    if(rotors_exist) {
        rotors[0] -> calculate_mapping(encryption);
        rotors_composition_before_reflection(0, encryption);
    }

    reflector -> calculate_mapping(encryption);

    if(rotors_exist) {
        rotors_composition_after_reflection(rotors.size() - 1, encryption);
    }

    plugboard -> calculate_mapping(encryption);

    perform_rotation();

    return (char) ('A' + encryption);
}

