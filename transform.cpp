#include <iostream>
using namespace std;

void dec_to_bin(int decimal) {
    int power_2 = 1;

    while (decimal > power_2) {
        power_2 *= 2;
    }

    power_2 /= 2;

    while (decimal != 0) {
        cout << decimal/power_2;
        decimal = decimal % power_2;
        power_2 /= 2;
    }

    cout << endl;
}

int main() {
    int ntd = 197;
    dec_to_bin(ntd);

    int nmc = 35;
    dec_to_bin(nmc);

    int tnt = 279;
    dec_to_bin(tnt);
}