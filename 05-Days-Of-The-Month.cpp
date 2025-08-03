/*
    Exercise 05 - Days of the Month
    -------------------------------
    This program asks the user to enter a number (1–12) representing a month,
    and then prints the number of days in that month.

    Purpose: Demonstrates use of conditionals (switch case), input/output,
    and integer handling.
*/

#include <iostream>
using namespace std;

int main() {
    int month; // Variable to store user input

    // Prompt the user to enter a month number
    cout << "Enter a month number (1–12): ";
    cin >> month;

    // Use a switch statement to determine the number of days
    switch (month) {
        case 2:
            // February (not accounting for leap years)
            cout << "28 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            // April, June, September, November
            cout << "30 days" << endl;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            // All remaining months
            cout << "31 days" << endl;
            break;
        default:
            // If the month number is not between 1 and 12
            cout << "Invalid month number" << endl;
    }

    return 0; // End of program
}
