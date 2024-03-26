#ifndef MUSICIAN_H
#define MUSICIAN_H

using namespace std;

class Musician {
    private:
        string instrument_name;
        int exp_year;
    public:
        Musician();
        Musician(string instrument, int experience);
        string get_instrument();
        int get_experience();
};

#endif
