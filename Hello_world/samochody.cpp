#include <iostream>
#include "samochody.h"

using namespace std;

int Engine::get_horse_pow()
{
        return horse_pow;
}

int Tires::get_traction()
{
        return traction;
}

void Engine::set_horse_pow(int n)
{
        horse_pow=n;
}

int Car::performance()
{
    int a, b;
    a=eng.get_horse_pow();
    b=tir.get_traction();
    return a*b;
}

Engine::Engine(string n, int h_p)
{
    name=n;
    horse_pow=h_p;
}

Tires::Tires(string n, int t)
{
    name=n;
    traction=t;
}

Car::Car(string n, int num)
{
    name=n;
    nr=num;
}

Engine & Engine::operator=(const Engine& e1)
{
    name=e1.name;
    horse_pow=e1.horse_pow;

    return * this;

}


Tires & Tires::operator=(const Tires& t1)
{
    name=t1.name;
    traction=t1.traction;

    return * this;

}


Car & Car::operator=(const Car& c1)
{
    name=c1.name;
    nr=c1.nr;
    tir=c1.tir;
    eng=c1.eng;

    return * this;

}

string Car::get_name()
{
    return name;
}

/*void Car::set_engine(Engine e1)
{
    eng.set_horse_pow(e1.get_horse_pow());
}
*/


