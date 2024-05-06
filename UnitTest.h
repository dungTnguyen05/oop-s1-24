#ifndef UNITTEST_H
#define UNITTEST_H

#include <iostream>
#include "Addition.h"
using namespace std;

class UnitTest {
    public:
        void runTests() {
            testAddition();
        }
    private:
        void testAddition() {
            Addition addition;

            if (addition.add(1, 2) != 3) {
                cout << "Test 1 failed!" << endl;
            }

            if (addition.add(197, 711) != 908) {
                cout << "Test 2 failed!" << endl;
            }

            if (addition.add(68, 86) != 154) {
                cout << "Test 3 failed!" << endl;
            }
        }
};

#endif