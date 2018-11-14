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
    Engine& operator =(const Engine& e1);
};

class Tires
{
    string name;
    int traction; // 1 - 10

public:

    Tires(string="default", int=5);
    void show();
    int get_traction();
    Tires& operator =(const Tires& t1);
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
    string get_name();
    int performance();
    void set_engine(Engine e1);
    void set_tire();
    Car& operator =(const Car& c1);
    //void change_engine();
    //void change_tire();
};


#endif // samochody_h
