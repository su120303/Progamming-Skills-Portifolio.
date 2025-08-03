// 10-IsItEven.cpp
// Description: This program checks if a number entered by the user is even or odd using a function.

#include <iostream>
using namespace std;

// Function to check if a number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int userNumber;

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> userNumber;

    // Call function and print result
    string result = checkEven(userNumber);
    cout << result << endl;

    return 0;
}
