//
// Created by cep215 on 18/10/16.
//

#ifndef CENIGMA_CEP215_ROTOR_HPP
#define CENIGMA_CEP215_ROTOR_HPP

#include "Mapping.hpp"


class Rotor : public Mapping {

    public:
        Rotor(char *file);

        int get_no_of_rotations();
        void increment_no_of_rotations();
        vector <int> advance_rotor_one_position();

    private:

        int no_of_rotations;
};


#endif //CENIGMA_CEP215_ROTOR_HPP
