#ifndef interface_h
#define interface_h
#include "manager.h"
#include "drivers.h"
#include "cars.h"
#include <iostream>

using namespace std;

class Interface
{
    int chosen_driver;

public:

    int choose_driver();
    int choose_car();
    int race_or_driver();
    void main_interface(Manager &,int,int);


};











#endif
