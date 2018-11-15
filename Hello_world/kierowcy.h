#ifndef kierowcy_h
#define kierowcy_h

#include "samochody.h"
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

    Driver(int=1, string="name", string="last name", string ="brak", int=0, int=0, int=0); // konstruktor domyœlny
    int load(int);
    void show(); // bedzie sortowalo punktu zeby na ekranie kierowcy byli wyswietlani od najlepszego do najgorszego
    void set_last_win(string);
    void set_points(int);
    void set_prize(int);
    int tuning_bolidu();
    int get_skill();
    int get_points();
    int winning_chance();
    void save(int);

    Driver& operator =(const Driver& d1); // przeciazony operator '=' dla objektow klasy Driver
};


#endif // kierowcy_h
