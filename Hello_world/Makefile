f1_race.exe : main.o drives.o cars.o interface.o manager.o test.o
	g++ main.o drives.o cars.o interface.o manager.o test.o -o f1_race.exe
main.o : main.cpp drivers.cpp drivers.h cars.cpp cars.h interface.cpp interface.h manager.cpp manager.h test.cpp test.h
	g++ -Wall -c main.cpp
drivers.o : drivers.cpp drivers.h cars.h
	g++ -Wall -c drivers.cpp
cars.o : cars.cpp cars.h
	g++ -Wall -c cars.cpp
interface.o : interface.cpp interface.h manager.h drivers.h cars.h
	g++ -Wall -c interface.cpp
manager.o : manager.cpp manager.h drivers.h cars.h
	g++ -Wall -c manager.cpp
test.o : test.cpp test.h manager.h drivers.h cars.h
	g++ -Wall -c test.cpp
clean :
	rm *.o f1_race.exe
