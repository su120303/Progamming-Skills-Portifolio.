/*
    Exercise 06 - Brute Force Attack
    --------------------------------
    This program simulates a brute force attempt to guess a password.
    The user has a maximum of 5 attempts to enter the correct password.
    If the correct password ("12345") is entered, access is granted.
    If all 5 attempts are used unsuccessfully, a warning message is shown.

    Purpose: Demonstrates while loops, string comparison, input/output,
    and control flow using conditionals.
*/

#include <iostream>
using namespace std;

int main() {
    string password = "12345"; // The correct password
    string input; // Variable for user input
    int attempts = 5; // Max number of allowed attempts

    // Loop until correct password is entered or attempts run out
    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> input;

        // Check if the entered password is correct
        if (input == password) {
            cout << "Welcome to the Secure Area" << endl;
            break; // Exit loop if password is correct
        } else {
            attempts--; // Decrease attempts by 1

            // If attempts remain, notify user
            if (attempts > 0) {
                cout << "Incorrect. You have " << attempts << " attempt(s) left." << endl;
            } else {
                // All attempts used
                cout << "Too many failed attempts. Authorities have been alerted!" << endl;
            }
        }
    }

    return 0; // End of program
}
