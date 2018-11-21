#include "interface.h"
#include "manager.h"
#include <iostream>
#include <windows.h>

using namespace std;

int Interface::race_or_driver()
{
    int a;
    cout<<"F1 racing simulator:"<<endl;
    cout<<"1 - race"<<endl;
    cout<<"2 - choose bolide"<<endl;
    cout<<"3 - upgrade bolide"<<endl;
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

void Interface::main_interface(Manager &m1, int nr_of_drv, int nr_of_bolid)
{
    int a=0, nrd, nrb;
    while(1)
    {
        cout<<"F1 racing simulator:"<<endl;
        cout<<"1 - race"<<endl;
        cout<<"2 - choose bolide"<<endl;
        cout<<"3 - upgrade bolide"<<endl;
        cin>>a;
        system("cls");
        if(a==1)
        {
            cout<<"Let's race";
        }
        if(a==2)
        {
            m1.show_all(nr_of_drv);
            cout<<"Choose driver:"<<endl;
            cin>>nrd;
            nrd=nrd-1;
            system("cls");

            m1.show_bolides(nr_of_bolid);
            cout<<"Choose bolide:"<<endl;
            cin>>nrb;
            nrb=nrb-1;
            system("cls");
            if(nrd+1<=nr_of_drv&&nrb+1<=nr_of_bolid)
        {
            m1.driver_to_bolide(nrd,nrb);

            m1.show_all(nr_of_drv);
        }
        else
            cout<<"incorrect number";
        }
        if(a==3)
        {
            m1.show_bolides(nr_of_bolid);
            cout<<"Choose bolide for upgrade:"<<endl;
            cin>>nrb;
            if(nrb<=nr_of_bolid)
            {
            m1.bolide_tuning(nrb,nr_of_bolid);
            system("cls");
            }
        }




    }
}

