#include "Unit.h"

Unit::Unit(): Unit(0, 0, 0) {
}

Unit::Unit(int unit_val, int num_beds, double unit_size) {
    value = unit_val;
    bedrooms = num_beds;
    size = unit_size;
}

int Unit::get_Num_Bedrooms() {
    return bedrooms;
}

int Unit::get_Value() {
    return value;
}

double Unit::get_Area() {
    return size;
}