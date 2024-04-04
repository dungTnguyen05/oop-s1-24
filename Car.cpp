#include "Car.h"

Car::Car(int new_ID): Vehicle(new_ID) {
}

int Car::getParkingDuration() {
    return 0.9 * Vehicle::getParkingDuration();
}