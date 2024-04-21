#include "TV.h"

TV::TV(): Appliance() {
    this -> screenSize = 0;
}

TV::TV(int powerRating, double screenSize): Appliance(powerRating) {
    this -> screenSize = screenSize;
}

double TV::getPowerConsumption() {
    return powerRating * (screenSize/10);
}

double TV::getScreenSize() {
    return screenSize;
}

void TV::setScreenSize(double screenSize) {
    this -> screenSize = screenSize;
}