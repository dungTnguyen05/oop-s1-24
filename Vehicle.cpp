#include "Vehicle.h"

Vehicle::Vehicle(int new_ID) {
    timeOfEntry = time(0);
    ID = new_ID;
}

int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    time_t current_time = time(0);
    int duration = int(current_time - timeOfEntry);
    return duration;
}