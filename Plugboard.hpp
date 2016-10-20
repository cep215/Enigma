//
// Created by cep215 on 18/10/16.
//

#ifndef CENIGMA_CEP215_PLUGBOARD_HPP
#define CENIGMA_CEP215_PLUGBOARD_HPP

#include <stdexcept>
#include <vector>
#include <algorithm>

#include "Mapping.hpp"

class Plugboard : public Mapping{

public:
    Plugboard(char *file);
};


#endif //CENIGMA_CEP215_PLUGBOARD_HPP
