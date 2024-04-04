#include "Motorbike.h"

Motorbike::Motorbike(int new_ID): Vehicle(new_ID) {
}

int Motorbike::getParkingDuration() {
    return 0.85 * Vehicle::getParkingDuration();
}