#include "Musician.h"

Musician::Musician(): Musician("null", 0) {
}

Musician::Musician(string instrument, int experience) {
    instrument_name = instrument;
    exp_year = experience;
}

string Musician::get_instrument() {
    return instrument_name;
}

int Musician::get_experience() {
    return exp_year;
}