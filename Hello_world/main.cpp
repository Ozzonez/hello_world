#include <iostream>
#include "samochody.h"
#include "kierowcy.h"
using namespace std;

int main()
{
    int a;

    cout << "Hello world!" << endl;

    Car ferrari;
    Driver p1;

    ferrari.wczytaj();
    p1.wczytaj();
    cout<<"wcisnij '1' aby trenowac"<<endl;
    cin>>a;
    if(a==1)
    {
        p1.trenuj();
        cout<<"WYTRENOWANO"<<endl;
        p1.wypisz();

    }

    return 0;
}
