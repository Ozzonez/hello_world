#include <iostream>
#include <vector>
#include <cstdlib>
#include "pom.h"

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

void Manager::show_all(int i)
{
    int s=0;
    while(s<=i-1)
    {
        Dr[s].show();
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
    if(s-1<i)
    {
        while(1)
        {
            if(Dr[s].get_number()==s)
            {
                Dr[s].tuning_bolidu();
                return;
            }
        }
    }

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

