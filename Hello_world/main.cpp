#include <iostream>
#include <vector>
#include "drivers.h"
#include "cars.h"
#include "manager.h"
using namespace std;

int main()
{
    int nrb, nrd, a=5, i;

    Car c1;




    Manager m1;

    //nrd=m1.load_all();
    i=m1.load_bolides();
    //m1.show_all(nrd);

    m1.show_bolides(i);
    m1.bolide_tuning(4,i);
    m1.show_bolides(i);
    //m1.sort_all(i);

    cout<<endl<<i;
    //m1.tuning(a,i);





    //m1.show_all(i);




    /*while(1)
    {
        cout<<"Ktory bolid chcesz ztuningowac?"<<endl;
        cin>>a;
    }



    m1.tuning(a);*/


    return 0;
}
