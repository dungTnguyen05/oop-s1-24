#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include "Appliance.h"
using namespace std;

class House {
    protected:
        Appliance **appliances;
        int numAppliances;
        int current;
    public:
        House();
        House(int numAppliances);

        bool addAppliance(Appliance *appliance);
        double getTotalPowerConsumption();
};

#endif