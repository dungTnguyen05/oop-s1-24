#ifndef APARTMENTBULDING_H
#define APARTMENTBUILDING_H

#include "Unit.h"

class ApartmentBuilding {
    private:
        int cap;
        int current;
        Unit *unit_list;
    public:
        ApartmentBuilding();
        ApartmentBuilding(int capacity);
        int get_Capacity();
        int get_Current_Number_of_Units();
        Unit *get_Contents();
        bool add_Unit(Unit unit);
        ~ApartmentBuilding();
    };

#endif