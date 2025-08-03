/*
    Exercise 08 - Simple Search
    ---------------------------
    This program performs a simple search through an array of names
    to check if a given name exists in the list.

    First it searches for "Sam" directly.
    Then, it asks the user to enter any name to search for in the array.

    Purpose: Demonstrates arrays, loops, conditionals, string comparison,
    and user input.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array of names to search
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    int size = 6;
    bool found = false;

    // Search for "Sam"
    for (int i = 0; i < size; i++) {
        if (names[i] == "Sam") {
            cout << "\"Sam\" is in the list!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\"Sam\" is not in the list." << endl;
    }

    // Optional requirement: allow user to search for any name
    string searchName;
    cout << "\nEnter a name to search for: ";
    cin >> searchName;
    found = false;

    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            cout << "\"" << searchName << "\" is in the list!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\"" << searchName << "\" is not in the list." << endl;
    }

    return 0;
}
