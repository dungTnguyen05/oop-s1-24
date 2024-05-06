#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"
using namespace std;

class InvoiceTest {
    public:
        void runTests() {
            testAddServiceCost();
        }
    private:
        void testAddServiceCost() {
            {
                Invoice invoice("ABCD");
                invoice.addServiceCost(10);

                if (invoice.getDollarsOwed() != 10) {
                    cout << "Test 1 failed!" << endl;
                }
            }

            {
                Invoice invoice("ABCD");
                invoice.addServiceCost(1);

                if (invoice.getDollarsOwed() != 1) {
                    cout << "Test 2 failed!" << endl;
                }
            }
        }
};

#endif
