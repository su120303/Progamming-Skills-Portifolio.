include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Helper to make strings lowercase
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    int score = 0;
    string answer;

    // Q1
    cout << "What is the capital of France? ";
    getline(cin, answer);
    if (toLower(answer) == "paris") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Paris." << endl;
    }

    // Q2
    cout << "What is the capital of Germany? ";
    getline(cin, answer);
    if (toLower(answer) == "berlin") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Berlin." << endl;
    }

    // Q3
    cout << "What is the capital of Italy? ";
    getline(cin, answer);
    if (toLower(answer) == "rome") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Rome." << endl;
    }

    // Q4
    cout << "What is the capital of Sweden? ";
    getline(cin, answer);
    if (toLower(answer) == "stockholm") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Stockholm." << endl;
    }

    // Q5
    cout << "What is the capital of Spain? ";
    getline(cin, answer);
    if (toLower(answer) == "madrid") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The answer is Madrid." << endl;
    }

    cout << "\nYou got " << score << " out of 5 correct!" << endl;
    return 0;
}
