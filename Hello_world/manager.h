#ifndef manager_h
#define manager_h
#include "drivers.h"
#include "cars.h"
#include <iostream>
#include <vector>

using namespace std;
// class which is in control of drivers and bolides, updating best drivers

class Manager
{
    string name; // nazwa wyscigu
    int prize; // nagroda pieniezna
    int p1, p2, p3; // punkty otrzymane za 1, 2 oraz 3 miejsce
    Driver D;
    Car C;
    vector<Driver> Dr;
    vector<Car> B;

    public:
    Manager(string="GP_Monaco", int=10000, int=6, int=3, int=1);
    int load_all();
    int load_bolides();

    void show_all(int);
    void sort_all(int);
    void show_sort(int);
    void show_bolides(int);

    void driver_to_bolide(int,int);
    int get_winning_chance(int);

    void tuning(int, int);
    void bolide_tuning(int, int);
    void menu();
    void GC_update(int, int, int); // aktualizacja listy wynikow po wyscigu

};






















#endif // pom_h
