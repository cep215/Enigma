//
// Created by cep215 on 18/10/16.
//

#include "Plugboard.hpp"

Plugboard::Plugboard(char *file) : Mapping() {

    vector <int> plugs;
    int x;

    ifstream f(file);

    while (f >> x) {
        plugs.push_back(x);
    }

    f.close();

    // Adjust the mapping according to the plugs provided:
    for (int i = 0 ; i < plugs.size() ; i+=2) {

        permutation[plugs[i]] = plugs[i + 1];
        permutation[plugs[i + 1]] = plugs[i];
    }

}
