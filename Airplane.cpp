#include "Airplane.h"

Airplane::Airplane(): Airplane(0, 0) {
}

Airplane::Airplane(int w, int p): AirCraft(w) {
    this -> numPassengers = p;
}

void Airplane::reducePassengers(int x) {
    if (x > numPassengers) {
        this -> numPassengers = 0;
    }

    else {
        this -> numPassengers -= x;
    }
}

void Airplane::fly(int headwind, int minutes) {
    float fuelNeeded = 0.001 * numPassengers * minutes;

    if (headwind < 60) {
        fuelNeeded += 0.3 * minutes;
    }

    else {
        fuelNeeded += 0.5 * minutes;
    }

    if (fuel - fuelNeeded < 20) {
        return;
    }

    fuel -= fuelNeeded;
    numberOfFlights++;
}

int Airplane::get_numPassengers() {
    return this -> numPassengers;
}

void Airplane::set_numPassengers(int p) {
    this -> numPassengers = p;
}