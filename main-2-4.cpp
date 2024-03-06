#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
    int a[6] = {1, 9, 7, 7, 1, 1};
    int x = 6;
    cout << sum_min_max(a, x) << endl;

    int b[7] = {10, 10, 10, 10, 10, 10, 1};
    int y = 7;
    cout << sum_min_max(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << sum_min_max(c, z) << endl;
}