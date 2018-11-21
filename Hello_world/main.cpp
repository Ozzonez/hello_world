#include <iostream>
#include <vector>
#include "drivers.h"
#include "cars.h"
#include "manager.h"
#include "interface.h"


using namespace std;

int main()
{
    int nrb, nrd, a=5;

    Car c1;


    Interface i1;

    Manager m1;

    nrd=m1.load_all();
    nrb=m1.load_bolides();

    i1.main_interface(m1, nrd, nrb);

    return 0;
}
