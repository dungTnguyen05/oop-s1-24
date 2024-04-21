#ifndef TV_H
#define TV_H

#include <iostream>
#include "Appliance.h"
using namespace std;

class TV: public Appliance {
    protected:
        double screenSize;
    public:
        TV();
        TV(int powerRating, double screenSize);
        
        double getPowerConsumption();

        double getScreenSize();
        void setScreenSize(double screenSize);
};

#endif