#include <iostream>
#include <vector>
#include "drivers.h"
#include "cars.h"
#include "manager.h"
using namespace std;

int main()
{
    int i, a=0;



    Manager m1;

    i=m1.load_all();

    m1.show_all(i);

    m1.sort_all(i);





    m1.show_all(i);




    /*while(1)
    {
        cout<<"Ktory bolid chcesz ztuningowac?"<<endl;
        cin>>a;
    }



    m1.tuning(a);*/


    return 0;
}
