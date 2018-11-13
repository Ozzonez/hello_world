#include <iostream>
#include <vector>

using namespace std;

class Driver
{
    int nr; // sluzy do dopasowania kierowcy z jego samochodem
    string name;
    string last_name;
    int age;
    //vector<string> race[1];
    string last_win;
    int points;
    int prize;
    int skill; // skill od 0 do 10

public:


    Driver(int=1, string="name", string="last name", int=20, string ="brak",int=0 , int=0, int=0); // konstruktor domyœlny
    void load(int);
    void show();
    void set_last_win();
    void set_points();
    void set_prize();
    int get_skill(int);
    int get_points(int);
    void save();
};

