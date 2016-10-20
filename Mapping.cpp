//
// Created by Catalina Popescu on 19/10/2016.
//

#include "Mapping.hpp"

Mapping::Mapping() {

    permutation = vector <int> (NO_LETTERS, 0);
    for (int i = 0 ; i < NO_LETTERS ; i++) {
        permutation[i] = i;
    }

}

void Mapping::calculate_mapping(int &encryption) {

    encryption = permutation[encryption];

}

void Mapping::calculate_inverse_mapping(int &encryption) {

    for (int i = 0 ; i < permutation.size() ; i++) {
        if (encryption == permutation[i]) {
            encryption = i;
            break;
        }
    }

}

vector<int> Mapping::getPermutation() {

    return permutation;

}

void Mapping::display() {

    vector<int>::iterator it = permutation.begin();

    while (it != permutation.end()) {
        cout << *it << " ";
        it++;
    }

    cout << endl;

}
