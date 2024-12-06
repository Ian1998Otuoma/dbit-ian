#include <iostream>
using namespace std;

int main() {
    int accountBalance = 5000;
    int dailyLimit = 2000;
    int withdrawalAmount;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount <= 0) {
        cout << "Invalid amount entered." << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Exceeds daily withdrawal limit." << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: KES " << accountBalance << endl;
    }

    return 0;
}
