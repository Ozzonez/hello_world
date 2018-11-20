#ifndef manager_h
#define manager_h
#include "drivers.h"
#include "cars.h"
#include <iostream>
#include <vector>

using namespace std;


class Manager // zarzadzanie lista zawodnikow oraz aktualizacja listy po wyscigu
{
    string name; // nazwa wyscigu
    int prize; // nagroda pieniezna
    int p1, p2, p3; // punkty otrzymane za 1, 2 oraz 3 miejsce
    Driver D;
    vector<Driver> Dr;

    public:
    Manager(string="GP_Monaco", int=10000, int=6, int=3, int=1);
    int load_all();
    void show_all(int);
    void sort_all(int);
    void tuning(int);
    void menu();
    void GC_update(int, int, int); // aktualizacja listy wynikow po wyscigu

};






















#endif // pom_h
