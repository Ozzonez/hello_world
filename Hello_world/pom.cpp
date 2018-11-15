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
