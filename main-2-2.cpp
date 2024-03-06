#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int ntd[8] = {1, 1, 0, 0, 0, 1, 0, 1};
    int x = 8;
    cout << binary_to_int(ntd, x) << endl;

    int tnp[10] = {1, 0, 1, 1, 0, 0, 0, 1, 1, 1};
    int y = 10;
    cout << binary_to_int(tnp, y) << endl;

    int c[11] = {1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1};
    int z = 11;
    cout << binary_to_int(c, z) << endl;
}