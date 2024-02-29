#include <iostream>
using namespace std;
extern int max_element(int array[], int n);

int main() {
    int a[7] = {1, 5, 2, 6, 3, 6, 8};
    int x = 7;
    cout << max_element(a, x) << endl;

    int b[4] = {3, 6, 2, 6};
    int y = 4;
    cout << max_element(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << max_element(c, z) << endl;
}