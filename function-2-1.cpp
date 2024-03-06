#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number) {
    int base10 = stoi(decimal_number);
    
    int power2 = 1;
    int len = 0;

    while (base10 > power2) {
        power2 *= 2;
        len++;
    }

    string binary_number[len];
    int digit;

    for (int i = len - 1; i >= 0; i--) {
        digit = base10 % 2;
        binary_number[len - 1 - i] = digit;
        base10 = (base10 - digit)/2;
    }

    cout << binary_number;
}