#ifndef drivers_h
#define drivers_h

#include "cars.h"
#include <iostream>
#include <vector>

using namespace std;

class Driver
{
    int nr; // sluzy do dopasowania kierowcy z jego samochodem
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
    void show(); // bedzie sortowalo punktu zeby na ekranie kierowcy byli wyswietlani od najlepszego do najgorszego
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

    Driver& operator =(const Driver& d1); // przeciazony operator '=' dla objektow klasy Driver
};


#endif // drivers_h
