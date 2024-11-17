all: prog

prog: main.o complex.o sorting.o
	g++ main.o complex.o sorting.o -o prog -lm

main.o: main.cpp complex.hpp sorting.hpp
	g++ -c main.cpp

complex.o: complex.cpp complex.hpp
	g++ -c complex.cpp

sorting.o: sorting.cpp sorting.hpp
	g++ -c sorting.cpp

clean:
	rm -f *.o prog
