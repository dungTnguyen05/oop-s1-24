#include <iostream>
using namespace std;

extern void hexDigits(int *numbers, int length);

int main() {
    int a[10] = {1, 9, 0, 7, 0, 7, 1, 1, 15, 9};
    int x = 10;
    hexDigits(a, x);

    int b[5] = {10, 13, 11, 10, 12};
    int y = 5;
    hexDigits(b, y);

    int c[12] = {1, 10, 2, 11, 3, 12, 4, 13, 5, 14, 6, 15};
    int z = 12;
    hexDigits(c, z);
}