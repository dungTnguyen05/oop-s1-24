#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include "Vehicle.h"
using namespace std;

class ParkingLot {
    private:
        int capacity;
        int current;
        Vehicle **vehicles;
    public:
        ParkingLot(int new_capacity);
        void parkVehicle(Vehicle *new_vehicle);
        void unparkVehicle(int ID_removed);
        int getCount();

        int countOverstayingVehicles(int max_duration);
};

#endif