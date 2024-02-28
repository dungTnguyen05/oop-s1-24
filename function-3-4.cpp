#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch(grade) {
        case 'A':
            cout << "Pass";
            break;

        case 'B':
            cout << "Pass";
            break;

        case 'C':
            cout << "Pass";
            break;

        case 'D':
            cout << "Fail";
            break;
        
        case 'E':
            cout << "Fail";
            break;

        default:
            cout << "Nothing";
    }
}