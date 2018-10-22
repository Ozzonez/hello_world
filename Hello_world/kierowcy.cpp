#include <iostream>
#include "kierowcy.h"
using namespace std;

void Driver::wczytaj()
{
    cout<<"Podaj imie kierowcy"<<endl;
    cin>>imie;
    cout<<"Podaj wiek"<<endl;
    cin>>wiek;
    cout<<"Podaj umiejetnosci (1-10)"<<endl;
    cin>>skill;
}
void Driver::trenuj()
{
    wiek++;
    skill++;
}
void Driver::wypisz()
{
    cout<<"imie: "<<imie<<endl;
    cout<<"wiek: "<<wiek<<endl;
    cout<<"umiejetnosci: "<<skill<<endl;
}
