#include <iostream>
using namespace std;

int *readNumbers() {
    int *arr = new int[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    return arr;
}

int secondSmallestSum(int *numbers, int length) {
    int min_res = numbers[0];
    int index = 0;

    for (int i = 1; i < length; i++) {
        if (numbers[i] < min_res) {
            min_res = numbers[i];
            index = i;
        }
    }

    int second_min_res = numbers[0];

    for (int i = 1; i < length; i++) {
        if (numbers[i] < second_min_res && i != index) {
            second_min_res = numbers[i];
        }
    }

    return second_min_res;
}