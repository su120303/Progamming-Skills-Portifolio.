/*
    Exercise 03 - Biography
    -----------------------
    This program introduces a person using variables to store their name,
    hometown, and age, and then prints that information.

    Purpose: Demonstrates the use of string and integer variables, 
    data output, and formatting with newline characters.
*/

#include <iostream>   // For console input/output
#include <string>     // For using the string data type
using namespace std;

int main() {
    // Declare and initialize variables
    string name = "Suhad Erfan";
    string hometown = "Lindesberg";
    int age = 22;

    // Output each piece of information on a new line
    cout << name << "\n" << hometown << "\n" << age << endl;

    return 0; // End of program
}
