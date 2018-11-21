#include <iostream>
#include "test.h"
#include "manager.h"

using namespace std;
// Testing class, f1 race simulation
void Test::race(Manager & M, int nr_of_drv)
{
    int s1, s2, s3;
    int maks1=-1, maks2=-1, maks3=-1;
    for(int k=0; k<3; k++)
    {
    for(int i=0; i<nr_of_drv; i++)
    {
        if(k==0&&M.get_winning_chance(i)>maks1)
        {
            maks1=M.get_winning_chance(i);
            s1=i;
        }
        if(k==1&&i!=s1&&M.get_winning_chance(i)>maks2)
        {
            maks2=M.get_winning_chance(i);
            s2=i;
        }
        if(k==2&&i!=s1&&i!=s2&&M.get_winning_chance(i)>maks3)
        {
            maks3=M.get_winning_chance(i);
            s3=i;
        }
    }
    }
    M.GC_update(s1, s2, s3);

}
