# edit this makefile so that running make compiles your enigma program

CODE = Main.o Mapping.o Plugboard.o Rotor.o Reflector.o EnigmaMachine.o

enigma: $(CODE)
	clang++ -std=c++11 -stdlib=libc++ -o enigma $(CODE)

Main.o: Main.cpp
	clang++ -std=c++11 -stdlib=libc++ -c Main.cpp

EnigmaMachine.o: EnigmaMachine.cpp Mapping.o Plugboard.o Rotor.o Reflector.o
	clang++ -std=c++11 -stdlib=libc++ -c EnigmaMachine.cpp

Mapping.o: Mapping.cpp
	clang++ -std=c++11 -stdlib=libc++ -c Mapping.cpp

Plugboard.o: Plugboard.cpp
	clang++ -std=c++11 -stdlib=libc++ -c Plugboard.cpp

Rotor.o: Rotor.cpp
	clang++ -std=c++11 -stdlib=libc++ -c Rotor.cpp

Reflector.o: Reflector.cpp
	clang++ -std=c++11 -stdlib=libc++ -c Reflector.cpp

clean:
	rm -rf enigma *.o

.PHONY: clean
