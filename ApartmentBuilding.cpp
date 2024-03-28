#include <iostream>
#include "ApartmentBuilding.h"
using namespace std;

ApartmentBuilding::ApartmentBuilding(): ApartmentBuilding(10) {
}

ApartmentBuilding::ApartmentBuilding(int capacity) {
    cap = capacity;
    current = 0;
    unit_list = new Unit[capacity];
}

int ApartmentBuilding::get_Capacity() {
    return cap;
}

int ApartmentBuilding::get_Current_Number_of_Units() {
    return current;
}

Unit *ApartmentBuilding::get_Contents() {
    return unit_list;
}

bool ApartmentBuilding::add_Unit(Unit unit) {
    if (current < cap) {
        unit_list[current] = unit;
        current++;
        return true;
    }

    return false;
}

ApartmentBuilding::~ApartmentBuilding() {
    delete[] unit_list;
}