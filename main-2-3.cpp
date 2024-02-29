#include <iostream>
using namespace std;
extern void two_five_nine(int array[], int n);

int main() {
    int a[10] = {2, 5, 9, 9, 5, 2, 5, 5, 5, 0};
    int x = 10;
    two_five_nine(a, x);

    int b[5] = {1, 9, 7, 2, 5};
    int y = 5;
    two_five_nine(b, y);

    int c[0] = {};
    int z = 0;
    two_five_nine(c, z);
}