#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main() {
    ParkingLot a(6);
    string vehicle_type;
    int new_ID, ID_removed;

    for (int i = 0; i < 6; i++) {
        cout << "Type of vehicle: ";
        cin >> vehicle_type;

        if (vehicle_type == "Car") {
            cout << "Enter the ID: ";
            cin >> new_ID;
            a.parkVehicle(new Car(new_ID));
        }

        else if (vehicle_type == "Bus") {
            cout << "Enter the ID: ";
            cin >> new_ID;
            a.parkVehicle(new Bus(new_ID));
        }

        else { 
            cout << "Enter the ID: ";
            cin >> new_ID;
            a.parkVehicle(new Motorbike(new_ID));
        }

        cout << "Current: " << a.getCount() << endl;
    }

    cout << "Enter the ID removed: ";
    cin >> ID_removed;
    a.unparkVehicle(ID_removed);
    cout << a.getCount() << endl;
}