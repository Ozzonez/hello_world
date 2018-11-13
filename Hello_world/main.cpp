#include <iostream>
#include <vector>
#include "kierowcy.h"
#include "samochody.h"
using namespace std;

int main()
{

    Driver d1;
    Driver d2;

    d1.show();

    d1.load(1);
    d2.load(2);

    d1.save(2);
    d2.save(1);



    return 0;
}
