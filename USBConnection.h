#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>
using namespace std;

class USBConnection {
    private:
        static stack<int> IDs;
        USBConnection();
    public:
        USBConnection* connectUSB() {
            if (IDs.empty()) {
                cout << "No more USB ports available" << endl;
                return nullptr;
            }

            else {
                cout << "USB port " << IDs.top() << " connected" << endl;
                IDs.pop();
                return new USBConnection();
            }
        }

        ~USBConnection() {
            cout << "USB port disconnected" << endl;
        }

        int get_ID() {
            return IDs.top();
        }
};

stack<int> USBConnection::IDs({3, 2, 1});

#endif