#include <iostream>
using namespace std;

int main()
 {
    int num1, num2, choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    choice = (num1 > num2) ? 1 : (num1 < num2) ? 2 : 3;

    switch (choice) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case 2:
            cout << "The maximum number is: " << num2 << endl;
            break;
        case 3:
            cout << "Both numbers are equal: " << num1 << endl;
            break;
    }

    return 0;
}
\