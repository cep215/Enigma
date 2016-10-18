// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "EnigmaMachine.hpp"

using namespace std;

int main(int argc, char **argv)
{
  shared_ptr <EnigmaMachine> machine(new EnigmaMachine(argc, argv));
  return 0;
}
