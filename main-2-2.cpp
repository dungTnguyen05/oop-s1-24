#include <iostream>
#include "TV.h"
using namespace std;

int main() {
    TV a;
    cout << a.get_powerRating() << endl;
    cout << a.get_isOn() << endl;
    cout << a.getScreenSize() << endl;
    cout << a.getPowerConsumption() << endl;

    a.set_powerRating(12);
    a.turnOn();
    a.setScreenSize(36);
    cout << a.get_powerRating() << endl;
    cout << a.get_isOn() << endl;
    cout << a.getScreenSize() << endl;
    cout << a.getPowerConsumption() << endl;

    TV b(24, 71.1);
    cout << b.get_powerRating() << endl;
    cout << b.get_isOn() << endl;
    cout << b.getScreenSize() << endl;
    cout << b.getPowerConsumption() << endl;
}