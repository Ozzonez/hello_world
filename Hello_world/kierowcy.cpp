#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "kierowcy.h"
using namespace std;

void Driver::load(int aktualny_nr)
{
    string linia;
    fstream plik;
    plik.open("D.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    while(!plik.eof())
    {
    plik>>nr;
    plik>>name;
    plik>>last_name;
    plik>>age;
    plik>>last_win;
    plik>>points;
    plik>>prize;
    plik>>skill;

    if(aktualny_nr==nr)
        break;
    }
    plik.close();
}

Driver::Driver(int f, string n, string ln, int a, string r, int pkt, int p, int s)
{
    nr=f;
    name=n;
    last_name=ln;
    age=a;
    last_win=r;
    points=pkt;
    prize=p;
    skill=s;
}

void Driver::show()
{
    cout<<"numer: "<<nr<<endl; // nie pokazuj, sluzy do dopasowania kierowcy z jego samochodem
    cout<<"imie: "<<name<<endl;
    cout<<"nazwisko: "<<last_name<<endl;
    cout<<"wiek: "<<age<<endl;
    cout<<"wygrane: "<<last_win<<endl;
    cout<<"punkty: "<<points<<endl;
    cout<<"wygrana: "<<prize<<endl;
    cout<<"skill: "<<skill<<endl;
}
