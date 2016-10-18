# edit this makefile so that running make compiles your enigma program

CODE = Main.o

enigma: $(CODE)
	clang++ -std=c++11 -stdlib=libc++ -o enigma $(CODE)

Main.o: Main.cpp
	clang++ -std=c++11 -stdlib=libc++ -c Main.cpp

clean:
	rm -rf enigma *.o

.PHONY: clean
