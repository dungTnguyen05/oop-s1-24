#include <iostream>
using namespace std;
extern int num_count(int array[], int n, int number);

int main() {
    int a[5] = {1, 1, 7, 1, 9};
    int x = 5;
    int num_1 = 1;
    cout << num_count(a, x, num_1) << endl;

    int b[6] = {2, 5, 7, 3, 5, 2};
    int y = 6;
    int num_2 = 2;
    cout << num_count(b, y, num_2) << endl;

    int c[0] = {};
    int z = 0;
    int num_3 = 8;
    cout << num_count(c, z, num_3) << endl;
}