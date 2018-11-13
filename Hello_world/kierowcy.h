#include <iostream>
#include <vector>

using namespace std;

class Driver
{
    string name;
    string last_name;
    int age;
    //vector<string> race[1];
    string last_win;
    int prize;
    int skill; // skill od 0 do 10

public:

    //Driver(string="name", string="last name", int=20, string* ="brak", int=0, int=0);
    Driver(string="name", string="last name", int=20, string ="brak", int=0, int=0); // konstruktor domyœlny

    void show();

};
