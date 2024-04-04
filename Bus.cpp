#include "Bus.h"

Bus::Bus(int new_ID): Vehicle(new_ID) {
}

int Bus::getParkingDuration() {
    return 0.75 * Vehicle::getParkingDuration();
}