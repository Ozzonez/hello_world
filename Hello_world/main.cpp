#include <iostream>
#include <vector>
#include "kierowcy.h"
#include "samochody.h"
using namespace std;

int main()
{
    //Engine e1(dasd);
    //Engine e2(dasd);
    //Engine e3(dasd);

    //Driver t[11];

    Driver D;
    vector<Driver> Dr;

    /*for(int i=1; i<=11; i++)
    {
        if(t[i].load(i)==0)
            break;
    }
    t[2].show();*/




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


    int s=0;
    while(s<=i-1)
    {
        Dr[s].show();
        s++;
    }

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

    s=0;
    while(s<=i-1)
    {
        Dr[s].show();
        s++;
    }











    return 0;
}
