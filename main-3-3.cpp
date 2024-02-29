#include <iostream>
using namespace std;
extern double weighted_average(int array[], int n);

int main() {
    int a[6] = {1, 2, 1, 4, 1, 3};
    int x = 6;
    cout << weighted_average(a, x) << endl;

    int b[6] = {1, 9, 0, 7, 1, 1};
    int y = 6;
    cout << weighted_average(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << weighted_average(c, z) << endl;
}