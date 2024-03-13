#include <iostream>
using namespace std;

double arrayMin(double *array, int size) {
    double res = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < res) {
            res = array[i];
        }
    }

    return res;
}