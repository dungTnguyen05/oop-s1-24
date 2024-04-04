#include "ParkingLot.h"
#include  "Vehicle.h"

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

void ParkingLot::unparkVehicle(int ID) {
    int count = 0;
    for (int i = 0; i<current; i++){
        if (vehicles[i]->getID() == ID){
            delete vehicles[i];
             current = current -1;
            for (int j = i; j < current; j++)
            {
                    vehicles[j] = vehicles[j+1];
            }
            delete[] vehicles[current];
            break;
         } 
         count ++;
         }
        if (count == current){
            cout<<"Vehicle not in the lot"<<endl;
        }
        cout<<endl;
         
}

int ParkingLot::getCount() {
    return current;
}

int ParkingLot::countOverstayingVehicles(int max_duration) {
    int count = 0;

    for (int i = 0; i < current; i++) {
        if (vehicles[i] -> getParkingDuration() > max_duration) {
            count++;
        }
    }

    return count;
}