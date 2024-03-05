#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int a[10][10] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                a[i][j] = 1;
            }
        }
    }

    cout << is_identity(a) << endl;

    int b[10][10] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                b[i][j] = 1;
            }
        }
    }

    b[9][9] = 2;

    cout << is_identity(b) << endl;

    int c[10][10] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                c[i][j] = 1;
            }
        }
    }

    c[0][0] = 1907;

    cout << is_identity(c) << endl;
}