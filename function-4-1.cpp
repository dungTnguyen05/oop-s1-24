#include <iostream>
using namespace std;

int *readNumbers() {
    int *arr = new int[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    return arr;
}

int secondSmallestSum(int *numbers, int length) {
    int sum_len = length * (length + 1)/2;
    int *sum_res = new int[sum_len];
    int index = 0;
    int temp;

    for (int i = 0; i < length; i++) {
        sum_res[index] = numbers[i];
        index++;

        for (int j = i + 1; j < length; j++) {
            sum_res[index] = sum_res[index - 1] + numbers[j];
            index++;
        }
    }

    for (int i = 0; i < sum_len; i++) {
        temp = sum_res[i];
        index = i;

        for (int j = i + 1; j < sum_len; j++) {
            if (sum_res[j] < temp) {
                temp = sum_res[j];
                index = j;
            }
        }

        sum_res[index] = sum_res[i];
        sum_res[i] = temp;
    }

    return sum_res[1];
}