#include <iostream>
using namespace std;
extern int array_sum(int array[], int n);

int main() {
    int a[6] = {1, 9, 7, 7, 1, 1};
    int x = 6;
    cout << array_sum(a, x) << endl;

    int b[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int y = 8;
    cout << array_sum(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << array_sum(c, z) << endl;
}