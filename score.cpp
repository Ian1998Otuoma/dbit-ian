#include <iostream>
using namespace std;

int main() {
    string fullName;
    int score;

    // Input student details
    cout << "Enter the student's full name: ";
    getline(cin, fullName);
    cout << "Enter the student's score: ";
    cin >> score;

    // Determine and output grade
    if (score >= 70 && score <= 100)
        cout << fullName << " has scored Grade A." << endl;
    else if (score >= 60)
        cout << fullName << " has scored Grade B." << endl;
    else if (score >= 50)
        cout << fullName << " has scored Grade C." << endl;
    else if (score >= 40)
        cout << fullName << " has scored Grade D." << endl;
    else if (score >= 0)
        cout << fullName << " has scored Grade F." << endl;
    else
        cout << "Invalid score entered." << endl;

    return 0;
}
