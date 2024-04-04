#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main() {
    ParkingLot a(10);
    int new_ID;

    for (int i = 0; i < 5; i++) {
        cout << "Enter the Car ID: ";
        cin >> new_ID;
        a.parkVehicle(new Car(new_ID));
        cout << "Current: " << a.getCount() << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "Enter the Bus ID: ";
        cin >> new_ID;
        a.parkVehicle(new Bus(new_ID));
        cout << "Current: " << a.getCount() << endl;
    }

    for (int i = 0; i < 2; i++) {
        cout << "Enter the Motorbike ID: ";
        cin >> new_ID;
        a.parkVehicle(new Motorbike(new_ID));
        cout << "Current: " << a.getCount() << endl;
    }

    cout << "There are " << a.countOverstayingVehicles(15) << " vehicle(s) staying over 15 seconds" << endl;
}