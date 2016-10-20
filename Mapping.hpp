//
// Created by Catalina Popescu on 19/10/2016.
//

#ifndef CENIGMA_CEP215_MAPPING_HPP
#define CENIGMA_CEP215_MAPPING_HPP

#include <vector>
#include <fstream>
#include <iostream>

#include "Constants.hpp"

using namespace std;

class Mapping {

    public:

        Mapping();

        void calculate_mapping(int &encryption);
        void calculate_inverse_mapping(int &encryption);
        vector <int> getPermutation();
        void display();


    protected:

        vector <int> permutation;

};


#endif //CENIGMA_CEP215_MAPPING_HPP
