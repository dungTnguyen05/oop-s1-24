#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>
using namespace std;

class Vehicle {
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int new_ID);
        int getID();
        int getParkingDuration();
};

#endif