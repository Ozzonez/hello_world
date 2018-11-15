#include <iostream>
#include <vector>
#include "kierowcy.h"
#include "samochody.h"
#include "pom.h"
using namespace std;

int main()
{
    int i;

   /* Driver D;
    vector<Driver> Dr;


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
 */





    Manager m1;

    i=m1.load_all();

    m1.show_all(i);

    m1.sort_all(i);



    m1.show_all(i);







    return 0;
}
