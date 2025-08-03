/*
    Exercise 04 - Primitive Quiz
    ----------------------------
    This program asks the user 5 geography questions (capital cities).
    It checks each answer and provides feedback, tracking the final score.

    Purpose: Demonstrates use of strings, conditionals, input/output,
    comparison (with case insensitivity), and counting correct answers.
*/

#include <iostream>      // For input and output
#include <string>        // For using strings
#include <algorithm>     // For transforming strings to lowercase
using namespace std;

// Function to convert input to lowercase to make comparison easier
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    int score = 0;       // Tracks number of correct answers
    string answer;       // Stores user input

    // Question 1
    cout << "What is the capital of France? ";
    getline(cin, answer);
    if (toLower(answer) == "paris") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Paris." << endl;
    }

    // Question 2
    cout << "What is the capital of Germany? ";
    getline(cin, answer);
    if (toLower(answer) == "berlin") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Berlin." << endl;
    }

    // Question 3
    cout << "What is the capital of Italy? ";
    getline(cin, answer);
    if (toLower(answer) == "rome") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Rome." << endl;
    }

    // Question 4
    cout << "What is the capital of Sweden? ";
    getline(cin, answer);
    if (toLower(answer) == "stockholm") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Stockholm." << endl;
    }

    // Question 5
    cout << "What is the capital of Spain? ";
    getline(cin, answer);
    if (toLower(answer) == "madrid") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Madrid." << endl;
    }

    // Final score output
    cout << "\nYou got " << score << " out of 5 correct!" << endl;

    return 0; // End of program
}
