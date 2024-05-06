#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"
using namespace std;

class EquivalenceTests {
    public:
        void runTests() {
            testPositiveIntegers();
            testNegativeIntegers();
            testZero();
            testOpposite();
            testBigIntegers();
        }
    private:
        void testPositiveIntegers() {
            Addition addition;
            
            if (addition.add(5, 10) != 15) {
                cout << "Test 1 failed!" << endl;
            }
        }

        void testNegativeIntegers() {
            Addition addition;

            if (addition.add(-4, -5) != -9) {
                cout << "Test 2 failed!" << endl;
            }
        }

        void testZero() {
            Addition addition;

            if (addition.add(69, 0) != 69) {
                cout << "Test 3 failed!" << endl;
            }
        }

        void testOpposite() {
            Addition addition;

            if (addition.add(7, -7) != 0) {
                cout << "Test 4 failed!" << endl;
            }
        }

        void testBigIntegers() {
            Addition addition;

            if (addition.add(1000000000, 2000000000) != 3000000000) {
                cout << "Test 5 failed!" << endl;
            }
        }
};

#endif