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

    return no_of_rotations;

}

void Rotor::increment_no_of_rotations() {

    no_of_rotations++;

}

vector<int> Rotor::advance_rotor_one_position() {

    vector <int> permutation_cpy = vector <int> (NO_LETTERS, 0);

    for(int i = 0; i < NO_LETTERS; i++) {
        permutation_cpy[i] = permutation[i];
    }

    for(int i = 0; i < NO_LETTERS; i++) {
        permutation[(NO_LETTERS + (i-1)) % NO_LETTERS] = (NO_LETTERS + permutation_cpy[i] - 1) % NO_LETTERS;
    }

    return permutation;

}
