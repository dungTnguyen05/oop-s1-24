#include <iostream>
#include "Fridge.h"
using namespace std;

int main() {
    Fridge a;
    cout << a.get_powerRating() << endl;
    cout << a.get_isOn() << endl;
    cout << a.getVolume() << endl;
    cout << a.getPowerConsumption() << endl;

    a.set_powerRating(10);
    a.turnOn();
    a.setVolume(480);
    cout << a.get_powerRating() << endl;
    cout << a.get_isOn() << endl;
    cout << a.getVolume() << endl;
    cout << a.getPowerConsumption() << endl;

    Fridge b(197, 711);
    cout << b.get_powerRating() << endl;
    cout << b.get_isOn() << endl;
    cout << b.getVolume() << endl;
    cout << b.getPowerConsumption() << endl;

    b.turnOn();
    cout << b.getPowerConsumption() << endl;
}