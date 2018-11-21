#include <iostream>
#include <vector>
#include <cstdlib>
#include "manager.h"


using namespace std;

int Manager::load_all()
{
    int i=0;
    while(1)
    {
        Dr.push_back(D);
        if(Dr[i].load(i+1)==0)
        {
            Dr.pop_back();
            break;
        }

        i++;

    }

    return i;
}

int Manager::load_bolides()
{
    int i=0;
    while(1)
    {
        B.push_back(C);
        if(B[i].load(i+1)==0)
        {
            B.pop_back();
            break;
        }

        i++;

    }

    return i;
}

void Manager::show_all(int i)
{
    int s=0;
    while(s<=i-1)
    {
        Dr[s].show();
        s++;
    }
}

void Manager::show_bolides(int i)
{
    int s=0;
    while(s<=i-1)
    {
        B[s].show();
        s++;
    }
}

void Manager::sort_all(int i)
{
    for(int w=0;w<i;w++)
{
    for(int k=1;k<i-w;k++)
    {
        if(Dr[k-1].get_points()<Dr[k].get_points())
        {
            D=Dr[k-1];
            Dr[k-1]=Dr[k];
            Dr[k]=D;
        }
    }
}
}


void Manager::tuning(int s, int i)
{
    int a=0;
    if(s-1<i)
    {
        while(1)
        {
            if(Dr[a].get_number()==s)
            {
                Dr[a].bolide_tuning();
                break;
            }
            a++;
        }
    }
     else
        cout<<"Incorrect number";

}

void Manager::bolide_tuning(int s, int i)
{
    int a=0;
    if(s-1<i)
    {
        while(1)
        {
            if(B[a].get_nr()==s)
            {
                B[a].tuning();
                break;
            }
            a++;
        }
    }
    else
        cout<<"Incorrect number";

}

Manager::Manager(string n, int pr, int n1, int n2, int n3)
{
    name=n;
    prize=pr;
    p1=n1;
    p2=n2;
    p3=n3;
}

void Manager::GC_update(int miejsce1, int miejsce2, int miejsce3)
{
    Dr[miejsce1].add_points(p1);
    Dr[miejsce2].add_points(p2);
    Dr[miejsce3].add_points(p3);

    Dr[miejsce1].add_prize(prize);

    Dr[miejsce1].set_last_win(name);
}

void Manager::driver_to_bolide(int d, int b)
{
    Dr[d].set_bolide(B[b]);
}

