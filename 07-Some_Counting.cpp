// Exercise 07 - Some Counting
// This program demonstrates the use of for loops in C++
// It covers 5 different counting patterns that was outlined in the assessment brief

#include <iostream>
using namespace std;

int main() {
    // Count up from 0 to 50 in increments of 1
    cout << "Count from 0 to 50:\n";
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Count down from 50 to 0 in decrements of 1
    cout << "Count down from 50 to 0:\n";
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Count up from 30 to 50 in increments of 1
    cout << "Count from 30 to 50:\n";
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Count down from 50 to 10 in decrements of 2
    cout << "Count down from 50 to 10 in steps of 2:\n";
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Count up from 100 to 200 in increments of 5
    cout << "Count from 100 to 200 in steps of 5:\n";
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
