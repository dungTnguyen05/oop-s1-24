#include <iostream>
using namespace std;
extern void print_pass_fail(char grade);

int main() {
    char grade_1 = 'A';
    print_pass_fail(grade_1);
    cout << endl;

    char grade_2 = 'D';
    print_pass_fail(grade_2);
    cout << endl;

    char grade_3 = '7';
    print_pass_fail(grade_3);
    cout << endl;
}