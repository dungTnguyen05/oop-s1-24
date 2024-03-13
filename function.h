#include <iostream>
using namespace std;

int **copy_2d(int **src, int rows, int cols) {
    int **dest = new int*[rows];

    for (int i = 0; i < rows; i++) {
        dest[i] = new int[cols];

        for (int j = 0; j < cols; j++) {
            dest[i][j] = src[i][j];
        }
    }

    return dest;
}