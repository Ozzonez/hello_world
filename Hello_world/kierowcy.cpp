#include <iostream>
#include <vector>
#include "kierowcy.h"
using namespace std;

/*void Driver::wczytaj()
{
    cout<<"Podaj imie kierowcy"<<endl;
    cin>>imie;
    cout<<"Podaj wiek"<<endl;
    cin>>wiek;
    cout<<"Podaj umiejetnosci (1-10)"<<endl;
    cin>>skill;
}*/

Driver::Driver(string n, string ln, int a, string r, int p, int s)
{
    name=n;
    last_name=ln;
    age=a;
    last_win=r;
    prize=p;
    skill=s;

}
void Driver::show()
{
    cout<<"imie: "<<name<<endl;
    cout<<"nazwisko: "<<last_name<<endl;
    cout<<"wiek: "<<age<<endl;
    cout<<"wygrane: "<<last_win<<endl;
    cout<<"wygrana: "<<prize<<endl;
    cout<<"skill: "<<skill<<endl;
}
