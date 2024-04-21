#include <iostream>
#include "Appliance.h"
using namespace std;

int main() {
    Appliance a;
    cout << a.get_powerRating() << endl;
    cout << a.get_isOn() << endl;
    cout << a.getPowerConsumption() << endl;

    a.set_powerRating(9);
    a.turnOn();
    cout << a.get_powerRating() << endl;
    cout << a.get_isOn() << endl;
    cout << a.getPowerConsumption() << endl;

    Appliance b(10);
    cout << b.get_powerRating() << endl;
    cout << b.get_isOn() << endl;
    cout << b.getPowerConsumption() << endl;

    b.set_powerRating(8);
    b.turnOn();
    cout << b.get_powerRating() << endl;
    cout << b.get_isOn() << endl;
    cout << b.getPowerConsumption() << endl;
}