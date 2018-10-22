hello_world.exe : main.o samochody.o kierowcy.o
	g++ main.o samochody.o kierowcy.o -o hello_world.exe
main.o : main.cpp samochody.cpp samochody.h kierowcy.cpp kierowcy.h
	g++ -Wall -c main.cpp
kierowcy.o : kierowcy.cpp kierowcy.h
	g++ -Wall -c kierowcy.cpp
samochody.o : samochody.cpp samochody.h
	g++ -Wall -c samochody.cpp
clean :
	rm *.o hello_world.exe
