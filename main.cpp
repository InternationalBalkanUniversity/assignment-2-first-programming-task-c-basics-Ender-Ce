#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO: Declare variables
    string fullName;
    int age;
    string studyProgram;

    // TODO: Ask user for input
    cout << "Ender Aray: ";
    getline(cin, fullName);

    cout << "20: ";
    cin >> age;
    cin.ignore(); // Ignore leftover newline

    cout << "Computer Engineering: ";
    getline(cin, studyProgram);

    // TODO: Display the information
    cout << "\nStudent Information\n";
    cout << "-------------------\n";
    cout << "Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "Program: " << studyProgram << endl;

    return 0;
}

