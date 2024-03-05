#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
    int a[4][4] = {{1, 9, 0, 7}, {0, 7, 1, 1}, {1, 5, 0, 9}, {2, 0, 0, 5}};
    cout << sum_diagonal(a) << endl;

    int b[4][4] = {{1, 4, 1, 5}, {7, 1, 8, 2}, {4, 1, 4, 2}, {7, 3, 2, 0}};
    cout << sum_diagonal(b) << endl;

    int c[4][4] = {{1000, 0, 0, 0}, {0, 100, 0, 0}, {0, 0, 10, 0}, {0, 0, 0, 1}};
    cout << sum_diagonal(c) << endl;
}