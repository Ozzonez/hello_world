#include <iostream>
#include "samochody.h"

using namespace std;

/*void Car::wczytaj()
{
    cout<<"Podaj nazwe samochodu"<<endl;
    cin>>nazwa;
    cout<<"Podaj moc"<<endl;
    cin>>moc;

}*/



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
