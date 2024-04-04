#include "ParkingLot.h"

ParkingLot::ParkingLot(int new_capacity) {
    capacity = new_capacity;
    current = 0;
    vehicles = new Vehicle *[capacity];
}

void ParkingLot::parkVehicle(Vehicle *new_vehicle) {
    if (current < capacity) {
        vehicles[current] = new_vehicle;
        current++;
    }

    else {
        cout << "The lot is full" << endl;
    }
}

void ParkingLot::unparkVehicle(int ID_removed) {
    int count = 0;

    for (int i = 0; i < current; i++) {
        if (ID_removed == vehicles[i] -> getID()) {
            delete[] vehicles[i];

            for (int j = i; j < current - 1; j++) {
                vehicles[j] = vehicles[j + 1];  
            }

            delete[] vehicles[current - 1];
            current--;
            break;
        }

        count++;
    }

    if (count == current) {
        cout << "Vehicle not in the lot" << endl;
    }

    cout << endl;
}

int ParkingLot::getCount() {
    return current;
}

