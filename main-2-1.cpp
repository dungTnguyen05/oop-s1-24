#include <iostream>
using namespace std;
extern int min_element(int array[], int n);

int main() {
    int a[5] = {1, 9, 7, 1, 1};
    int x = 5;
    cout << min_element(a, x) << endl;

    int b[6] = {6, 9, 1, 9, 6, 9};
    int y = 6;
    cout << min_element(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << min_element(c, z) << endl;
}