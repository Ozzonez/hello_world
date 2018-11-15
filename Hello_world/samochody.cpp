#include <iostream>
#include <windows.h>
#include "samochody.h"

using namespace std;






Car::Car(string n, int num, int h, int t, int g)
{
    name=n;
    nr=num;
    horse_power=h;
    tires=t;
    gearbox=g;

}

/*Engine & Engine::operator=(const Engine& e1)
{
    name=e1.name;
    horse_pow=e1.horse_pow;

    return * this;

}


Tires & Tires::operator=(const Tires& t1)
{
    name=t1.name;
    traction=t1.traction;

    return * this;

}*/


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
    cout<<"Aktualny samochod:"<<name<<"          "<<"4 - wyjscie"<<endl;
    cout<<"1 Moc silnika:"<<horse_power<<endl;
    cout<<"2 Opony:"<<tires<<endl;
    cout<<"3 Skrzynia biegow:"<<gearbox<<endl;
    cout<<"Co chcesz ulepszyc?"<<endl;
    while(1)
    {
    cin>>a;
    if(a==1)
    {
        cout<<"Podaj nowa moc silnika:";
        cin>>temp;
        if(temp<=0)
        {
            cout<<"Bledne dane"<<endl;
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
        cout<<"Podaj nowa wartosc przyczepnosci opon:";
        cin>>temp;
        if(temp<=0)
        {
            cout<<"Bledne dane"<<endl;
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
        cout<<"Podaj nowa wartosc jakosci skrzyni biegow:";
        cin>>temp;
        if(temp<=0)
        {
            cout<<"Bledne dane"<<endl;
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


