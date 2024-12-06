#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine;

    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    cout << "Enter the type of book (regular/children/reference): ";
    cin >> bookType;

    if (daysLate > 0) {
        if (bookType == "regular") {
            fine = daysLate * 50;
        } else if (bookType == "children") {
            fine = daysLate * 25;
        } else if (bookType == "reference") {
            fine = 0;
        } else {
            cout << "Invalid book type.\n";
            return 1;
        }

        cout << "The late fee is: KES " << fine << endl;
    } else {
        cout << "The book is not late.\n";
    }

    return 0;
}
