#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number) {
    int base10 = stoi(decimal_number);
    int power2 = 1;
    int len = 0;

    while (base10 >= power2) {
        power2 *= 2;
        len++;
    }

    power2 /= 2;

    string binary_number[len];
    int digit;

    for (int i = 0; i < len; i++) {
        int digit = base10/power2;
        binary_number[i] = char(digit + 48); // ASCII table (store binary number in string type)
        base10 = base10 % power2;
        power2 /= 2;

        cout << binary_number[i];
    }

    cout << endl;
}