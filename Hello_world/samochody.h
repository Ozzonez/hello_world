#ifndef samochody_h
#define samochody_h
#include <iostream>

using namespace std;

class Engine
{
    string name;
    int horse_pow;

public:

    Engine(string="default_engine", int=150);
    void show();
    int get_horse_pow();
    void set_horse_pow(int);
};

class Tires
{
    string name;
    int traction; // 1 - 10

public:

    Tires(string="default", int=5);
    void show();
    int get_traction();
};

class Car
{
    string name; // show bedzie pokazywal imie kierowcy i druzyne np ferrari czyli nazwe car
    int nr;
    Tires tir;
    Engine eng;

public:

    Car(string="default_bolide", int=1);
    void wczytaj();
    void tuning();
    int performance();
    void set_engin();
    void set_tire();
    //void change_engine();
    //void change_tire();
};


#endif // samochody_h
