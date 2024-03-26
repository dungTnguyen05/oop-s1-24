#ifndef MUSICIAN_CPP
#define MUSICIAN_CPP

#include "Musician.h"

Musician::Musician(string instrument, int experience) {
    instrument_name = instrument;
    exp_year = experience;
}

Musician::Musician(): Musician("null", 0) {
}

string Musician::get_instrument() {
    return instrument_name;
}

int Musician::get_experience() {
    return exp_year;
}

#endif