#ifndef interface_h
#define interface_h
#include "manager.h"
#include "drivers.h"
#include "cars.h"
#include <iostream>

using namespace std;
// class that handles interface
class Interface
{
    int chosen_driver;

public:

    void main_interface(Manager &,int,int);


};



#endif
