//
// Created by cep215 on 18/10/16.
//

#include "Reflector.hpp"

Reflector::Reflector() : Mapping() {

    for (int i = 0 ; i < NO_LETTERS ; i++) {
        permutation[i] = (i + REFLECTION_OFFSET) % NO_LETTERS;
    }

}
