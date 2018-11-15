#ifndef pom_h
#define pom_h
#include "kierowcy.h"
#include "samochody.h"
#include <iostream>
#include <vector>

using namespace std;


class Manager
{
    Driver D;
    vector<Driver> Dr;

    public:
    int load_all();
    void show_all(int);
    void sort_all(int);

};



class Race
{
    string name; // nazwa wyscigu
    int prize; // nagroda pieniezna
    int p1, p2, p3; // punkty otrzymane za 1, 2 oraz 3 miejsce

    public:

    void GC_update();




};



















#endif // pom_h
