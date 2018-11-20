#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "drivers.h"

using namespace std;

int Driver::load(int current_nr)
{
    string help;
    fstream file;
    file.open("D.txt", ios::in);

    if(file.good()==false)
    {
        cout<<"couldn't open the file!";
        exit(0);
    }
    while(1)
    {
    if(file.eof()==1)
    {
        file.close();
        return 0;
    }

    file>>nr;
    file>>name;
    file>>last_name;
    file>>last_win;
    file>>points;
    file>>prize;
    file>>skill;
    file>>help;
    bolid.set_name(help);

    if(current_nr==nr)
        break;

    }
    file.close();
    return 1;
}

void Driver::save(int current_nr)
{
    fstream file;
    if(current_nr==1)
    file.open("dd.txt", ios::out);
    else
    file.open("dd.txt", ios::out | ios::app);

    if(file.good()==false)
    {
        cout<<"couldn't open the file!";
        exit(0);
    }

    file<<nr<<" ";
    file<<name<<" ";
    file<<last_name<<" ";
    file<<last_win<<" ";
    file<<points<<" ";
    file<<prize<<" ";
    file<<skill<<endl;

    file.close();
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

void Driver::add_points(int n)
{
        if(n>0)
        points=points+n;
}

void Driver::add_prize(int n)
{
        if(n>0)
        prize=prize+n;
}

int Driver::get_points()
{
        return points;
}

int Driver::get_number()
{
        return nr;
}

int Driver::get_skill()
{
        return skill;
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

void Driver::bolide_tuning()
{
    bolid.tuning();
}
