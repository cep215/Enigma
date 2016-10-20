# edit this makefile so that running make compiles your enigma program

CODE = Main.o Mapping.o Plugboard.o Rotor.o Reflector.o EnigmaMachine.o

enigma: $(CODE)
	g++ -std=c++11  -o enigma $(CODE)

Main.o: Main.cpp
	g++ -std=c++11  -c Main.cpp

EnigmaMachine.o: EnigmaMachine.cpp Mapping.o Plugboard.o Rotor.o Reflector.o
	g++ -std=c++11  -c EnigmaMachine.cpp

Mapping.o: Mapping.cpp
	g++ -std=c++11  -c Mapping.cpp

Plugboard.o: Plugboard.cpp
	g++ -std=c++11  -c Plugboard.cpp

Rotor.o: Rotor.cpp
	g++ -std=c++11  -c Rotor.cpp

Reflector.o: Reflector.cpp
	g++ -std=c++11  -c Reflector.cpp

clean:
	rm -rf enigma *.o

.PHONY: clean
