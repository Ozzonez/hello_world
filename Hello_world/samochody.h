#include <iostream>


using namespace std;

class Car
{
    string nazwa; // show bedzie pokazywal imie kierowcy i druzyne np ferrari czyli nazwe car
    int nr;
    Tires tir;
    Engine eng;
    void wczytaj();
    void tuning();


};

class Engine
{
    int horse_pow;
    int failure_freq;

    void load();
    void show();
    void get_horse_pow();
};

class Tires
{
    int traction; // 1 - 10

    void load();
    void show();
    void get_traction();
};
