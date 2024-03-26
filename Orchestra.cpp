#include "Orchestra.h"

Orchestra::Orchestra(): Orchestra(0) {
}

Orchestra::Orchestra(int size) {
    max_size = size;
    current_size = 0;
    musician_arr = new Musician[size];
}

int Orchestra::get_current_number_of_members() {
    return current_size;
}

bool Orchestra::has_instrument(string instrument) {
    for (int i = 0; i < current_size; i++) {
        if (musician_arr[i].get_instrument() == instrument) {
            return true;
        }
    }

    return false;
}

Musician *Orchestra::get_members() {
    return musician_arr;
}

bool Orchestra::add_musician(Musician new_musician) {
    if (current_size < max_size) {
        musician_arr[current_size] = new_musician;
        current_size++;
        return true;
    }

    return false;
}

Orchestra::~Orchestra() {
    delete[] musician_arr;
}