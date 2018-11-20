#include <iostream>
#include <windows.h>
#include "cars.h"

using namespace std;






Car::Car(string n, int num, int h, int t, int g)
{
    name=n;
    nr=num;
    horse_power=h;
    tires=t;
    gearbox=g;

}

Car & Car::operator=(const Car& c1)
{
    name=c1.name;
    nr=c1.nr;
    horse_power=c1.horse_power;
    tires=c1.tires;
    gearbox=c1.gearbox;

    return * this;

}

string Car::get_name()
{
    return name;
}

void Car::set_name(string n)
{
    name=n;
}

int Car::tuning()
{
    while(1)
    {
    int a=0, temp=0;
    cout<<"Current car:"<<name<<"          "<<"4 - wyjscie"<<endl;
    cout<<"1 Engine horse power:"<<horse_power<<endl;
    cout<<"2 Tires:"<<tires<<endl;
    cout<<"3 Gearbox:"<<gearbox<<endl;
    cout<<"What parameters you want to improve?"<<endl;
    while(1)
    {
    cin>>a;
    if(a==1)
    {
        cout<<"New horse power:";
        cin>>temp;
        if(temp<=0)
        {
            cout<<"incorrect data"<<endl;
            break;
        }
        else
        {
            system("cls");
            horse_power=temp;
            break;
        }
    }
    if(a==2)
    {
        cout<<"New level of tires:";
        cin>>temp;
        if(temp<=0)
        {
            cout<<"incorrect data"<<endl;
            break;
        }
        else
        {
            system("cls");
            tires=temp;
            break;
        }
    }

    if(a==3)
    {
        cout<<"New level of gearbox:";
        cin>>temp;
        if(temp<=0)
        {
            cout<<"incorrect data"<<endl;
            break;
        }
        else
        {
            system("cls");
            gearbox=temp;
            break;
        }
    }
    if(a==4)
    {
        system("cls");
        return 0;
    }

    }
    }

    return 0;


}


