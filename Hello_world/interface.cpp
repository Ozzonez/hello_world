#include "interface.h"
#include <iostream>

using namespace std;

int Interface::race_or_driver()
{
    int a;
    cout<<"F1 racing simulator:"<<endl;
    cout<<"1 - race"<<endl;
    cout<<"2 - choose bolide"<<endl;
    cout<<"2 - upgrade bolide"<<endl;
    cin>>a;
}

int Interface::choose_driver()
{

    int a;
    cout<<"Choose driver:"<<endl;
    cin>>a;

    return a;
}

int Interface::choose_car()
{

    int a;
    cout<<"Choose bolide:"<<endl;
    cin>>a;

    return a;
}



