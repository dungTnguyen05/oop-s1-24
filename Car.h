#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car: public Vehicle {
    public:
        Car(int new_ID);
        int getParkingDuration();
};

#endif