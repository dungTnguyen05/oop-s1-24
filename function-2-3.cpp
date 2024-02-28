#include <iostream>
using namespace std;

void two_five_nine(int array[], int n) {
    int count_twos = 0;
    int count_fives = 0;
    int count_nines = 0;

    for (int i = 0; i < n; i++) {
        switch(array[i]) {
            case 2:
                count_twos++;
                break;
            
            case 5:
                count_fives++;
                break;
            
            case 9:  
                count_nines++;
                break;
        }
    }

    cout << "2:" << count_twos << ";5:" << count_fives << ";9:" << count_nines << endl;
}