#include <iostream>
using namespace std;
extern int array_sum(int array[], int n);

int main() {
    int array[6] = {1, 9, 7, 7, 1, 1};
    int n = 6;
    cout << array_sum(array, n);
}