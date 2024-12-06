#include <iostream>
using namespace std;

int main() {
    string fullName;
    int score;      
    int gradeCategory; 

    // Input student details
    cout << "Enter the student's full name: "; 
    getline(cin, fullName); 
    cout << "Enter the student's score: "; 
    cin >> score; 

    // Determine grade category based on score
    if (score >= 0 && score <= 100){
        gradeCategory = score / 10; 
    } else {
        gradeCategory = -1;
    }

    // Determine and output grade using switch
    switch (gradeCategory) {
        case 10: // Handle scores 100 specifically
        case 9: // Scores 90-99
        case 8: // Scores 80-89
        case 7: // Scores 70-79
            cout << fullName << " has scored Grade A." << endl; 
            break;
        case 6: // Scores 60-69
            cout << fullName << " has scored Grade B." << endl;
            break;
        case 5: // Scores 50-5
            cout << fullName << " has scored Grade C." << endl;
            break;
        case 4: // Scores 40-49
            cout << fullName << " has scored Grade D." << endl; 
            break;
        case 3: // Scores 30-39
        case 2: // Scores 20-29
        case 1: // Scores 10-19
        case 0: // Scores 0-9
            cout << fullName << " has scored Grade F." << endl;
            break;
        default: // Handle invalid scores
            cout << "Invalid score entered." << endl;
    }

    return 0;
}
