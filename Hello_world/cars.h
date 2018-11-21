#ifndef cars_h
#define cars_h
#include <iostream>

using namespace std;

class Car
{
    string name;
    int nr;
    int horse_power;
    int tires;
    int gearbox;

public:

    Car(string="default_bolide", int=1, int=150, int=10, int=5);
    int load(int);
    int get_nr();
    void show();
    string get_name();
    void set_name(string);
    int tuning();
    void set_tire();
    int winning_chance();
    Car& operator =(const Car& c1);
};


#endif // samochody_h
