#include <iostream>
#include "function.h"
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;
    int **src = new int*[rows];

    for (int i = 0; i < rows; i++) {
        src[i] = new int[cols];

        for (int j = 0; j < cols; j++) {
            cout << "Type a num: ";
            cin >> src[i][j];
        }
    }

    int **dest = copy_2d(src, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dest[i][j] << " ";
        }

        cout << endl;
    }
}