#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "kierowcy.h"

using namespace std;

int Driver::load(int aktualny_nr)
{
    fstream plik;
    plik.open("D.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    while(1)
    {
    if(plik.eof()==1)
    {
        return 0;
    }

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
    return 1;
}

void Driver::save(int aktualny_nr)
{
    fstream plik;
    if(aktualny_nr==1)
    plik.open("dd.txt", ios::out);
    else
    plik.open("dd.txt", ios::out | ios::app);

    if(plik.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }

    plik<<nr<<" ";
    plik<<name<<" ";
    plik<<last_name<<" ";
    plik<<age<<" ";
    plik<<last_win<<" ";
    plik<<points<<" ";
    plik<<prize<<" ";
    plik<<skill<<endl;

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


void Driver::set_last_win(string n)
{
        last_win=n;
}

void Driver::set_points(int n)
{
        points=n;
}

void Driver::set_prize(int n)
{
        prize=n;
}

int Driver::get_points()
{
        return points;
}

int Driver::get_skill()
{
        return skill;
}



