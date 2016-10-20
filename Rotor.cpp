//
// Created by cep215 on 18/10/16.
//

#include "Rotor.hpp"

Rotor::Rotor(char *file) : Mapping() {

    no_of_rotations = 0;
    int x, i = 0;

    ifstream f(file);

    if(!f) {
        throw invalid_argument("File does not exist");
    }

    while (f >> x) {
        permutation[i++] = x;
    }

    f.close();

}

int Rotor::get_no_of_rotations() {
    return 0;
}

void Rotor::increment_no_of_rotations() {

}

vector<int> Rotor::advance_rotor_one_position() {
    return vector<int>();
}
