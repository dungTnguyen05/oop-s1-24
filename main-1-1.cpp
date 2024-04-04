#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main() {
    int num_car, num_bus, num_motorbike, num_vehicle;
    cin >> num_car >> num_bus >> num_motorbike;

    num_vehicle = num_car + num_bus + num_motorbike;

    Vehicle **vehicle_list = new Vehicle *[num_vehicle];

    int new_ID;
    int index = 0;


    for (int i = 0; i < num_car; i++) {
        cin >> new_ID;
        vehicle_list[index] = new Car(new_ID); 
        index++;
    }

    for (int i = 0; i < num_bus; i++) {
        cin >> new_ID;
        vehicle_list[index] = new Bus(new_ID);
        index++;
    }

    for (int i = 0; i < num_motorbike; i++) {
        cin >> new_ID;
        vehicle_list[index] = new Motorbike(new_ID);
        index++;
    }

    for (int i = 0; i < num_vehicle; i++) {
        cout << vehicle_list[i] -> getID() << " " << vehicle_list[i] -> getParkingDuration() << endl;
    }
}