#include <iostream>
#include "samochody.h"
using namespace std;

void Car::wczytaj()
{
    cout<<"Podaj nazwe samochodu"<<endl;
    cin>>nazwa;
    cout<<"Podaj moc"<<endl;
    cin>>moc;

}
