#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge: public Appliance {
    protected:
        double volume;
    public: 
        Fridge();
        Fridge(int powerRating, double volume);

        double getPowerConsumption();

        double getVolume();
        void setVolume(double volume);
};

#endif