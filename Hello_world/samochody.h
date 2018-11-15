#ifndef samochody_h
#define samochody_h
#include <iostream>

using namespace std;

class Car
{
    string name; // show bedzie pokazywal imie kierowcy i druzyne np ferrari czyli nazwe car
    int nr;
    int horse_power;
    int tires;
    int gearbox;

public:

    Car(string="default_bolide", int=1, int=150, int=10, int=5);
    void wczytaj();
    string get_name();

    int tuning();
    void set_tire();
    Car& operator =(const Car& c1);
    //void change_engine();
    //void change_tire();
};


#endif // samochody_h
