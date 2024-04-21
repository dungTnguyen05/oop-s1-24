#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;

int main() {
    House a(2);
    Fridge b(20, 360.5); // Fridge *b = new Fridge(20, 360.5);
    TV c(18, 72.6); // TV *c = new TV(18, 72.6);
    TV d; // TV *d = new TV;

    cout << a.addAppliance(&b) << endl;
    cout << a.addAppliance(&c) << endl;
    cout << a.addAppliance(&d) << endl;

    cout << b.getPowerConsumption() + c.getPowerConsumption() << endl;
    cout << a.getTotalPowerConsumption() << endl;
}