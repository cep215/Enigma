//
// Created by cep215 on 18/10/16.
//

#ifndef CENIGMA_CEP215_ENIGMAMACHINE_HPP
#define CENIGMA_CEP215_ENIGMAMACHINE_HPP

#include <cmath>
#include <memory>
#include <vector>
#include "Rotor.hpp"
#include "Plugboard.hpp"
#include "Reflector.hpp"

using namespace std;

class EnigmaMachine {

    private:

        vector <shared_ptr <Rotor>> rotors;
        shared_ptr <Plugboard> plugboard;
        shared_ptr <Reflector> reflector;

        void rotors_composition_before_reflection (int rotor_index, int &encryption);
        void rotors_composition_after_reflection  (int rotor_index, int &encryption);
        void perform_rotation();

    public:

        EnigmaMachine(int argv, char **argc);
        char encode_chr(char c);

};


#endif //CENIGMA_CEP215_ENIGMAMACHINE_HPP
