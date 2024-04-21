#include "Fridge.h"

Fridge::Fridge(): Appliance() {
    this -> volume = 0;
}

Fridge::Fridge(int powerRating, double volume): Appliance(powerRating) {
    this -> volume = volume;
}

double Fridge::getPowerConsumption() {
    return powerRating * 24 * (volume/100);
}

double Fridge::getVolume() {
    return volume;
}

void Fridge::setVolume(double volume) {
    this -> volume = volume;
}