#include <iostream>
using namespace std;

int main() {
    string password = "12345";
    string input;
    int attempts = 5;

    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> input;

        if (input == password) {
            cout << "Welcome to the Secure Area" << endl;
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                cout << "Incorrect. You have " << attempts << " attempt(s) left." << endl;
            } else {
                cout << "Too many failed attempts. Authorities have been alerted!" << endl;
            }
        }
    }

    return 0;
}
