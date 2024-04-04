#ifndef BUS_H
#define BUS_H

#include <iostream>
#include "Vehicle.h"
using namespace std;

class Bus: public Vehicle {
    public:
        Bus(int new_ID);
        int getParkingDuration();
};

#endif