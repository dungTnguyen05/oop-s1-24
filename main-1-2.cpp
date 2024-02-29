#include <iostream>
using namespace std;
extern double array_mean(int array[], int n);

int main() {
    int a[8] = {1, 9, 0, 7, 2, 0, 0, 5};
    int x = 8;
    cout << array_mean(a, x) << endl;

    int b[7] = {1, 10, 9, 2, 3, 8, 7};
    int y = 7;
    cout << array_mean(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << array_mean(c, z) << endl;
}