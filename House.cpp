#include "House.h"

House::House() {
    this -> appliances = new Appliance*[0];
    this -> numAppliances = 0;
    this -> current = 0;
}

House::House(int numAppliances) {
    this -> appliances = new Appliance*[numAppliances];
    this -> numAppliances = numAppliances;
    this -> current = 0;
}

bool House::addAppliance(Appliance *appliance) {
    if (current < numAppliances) {
        appliances[current] = appliance;
        current++;
    }

    return false;
}

double House::getTotalPowerConsumption() {
    double res = 0;

    for (int i = 0; i < current; i++) {
        res += appliances[i] -> getPowerConsumption();
    }

    return res;
}