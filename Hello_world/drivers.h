#ifndef drivers_h
#define drivers_h

#include "cars.h"
#include <iostream>
#include <vector>

using namespace std;
//Class containing driver and his bolide
class Driver
{
    int nr;
    string name;
    string last_name;
    string last_win;
    int points;
    int prize;
    int skill; // skill od 0 do 10
    Car bolid;

    public:

    Driver(int=1, string="name", string="last_name", string ="empty", int=0, int=0, int=0); // konstruktor domyœlny
    int load(int);
    void show(); // shows all atributes of a driver
    void set_last_win(string);
    void set_bolide(Car);
    void add_points(int);
    void add_prize(int);
    void bolide_tuning();
    int get_skill();
    int get_points();
    int get_number();
    int winning_chance();
    void save(int);

    Driver& operator =(const Driver& d1);
};


#endif // drivers_h
