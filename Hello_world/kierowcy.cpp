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
        plik.close();
        return 0;
    }

    plik>>nr;
    plik>>name;
    plik>>last_name;
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
    plik<<last_win<<" ";
    plik<<points<<" ";
    plik<<prize<<" ";
    plik<<skill<<endl;

    plik.close();
}

Driver::Driver(int f, string n, string ln, string r, int pkt, int p, int s)
{
    nr=f;
    name=n;
    last_name=ln;
    last_win=r;
    points=pkt;
    prize=p;
    skill=s;
}

void Driver::show()
{
    cout<<nr<<" "; // nie pokazuj, sluzy do dopasowania kierowcy z jego samochodem
    cout<<name<<" ";
    cout<<last_name<<" ";
    cout<<last_win<<" ";
    cout<<points<<" ";
    cout<<prize<<" ";
    cout<<bolid.get_name()<<endl;
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

int Driver::winning_chance()
{
    return skill*bolid.performance();
}

Driver & Driver::operator=(const Driver& d1)
{
    nr=d1.nr;
    name=d1.name;
    last_name=d1.last_name;
    last_win=d1.last_win;
    points=d1.points;
    prize=d1.prize;
    skill=d1.skill;
    bolid=d1.bolid;
    return * this;

}

