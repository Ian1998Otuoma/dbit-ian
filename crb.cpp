#include <iostream>
using namespace std;

// Function to calculate loan eligibility
void ianLoanCalculator() {
    int age, customerMonths;
    double bankBalance;
    string crbStatus;

    // Input customer details
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bankBalance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter the number of months you have been a customer: ";
    cin >> customerMonths;

    // Check eligibility
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerMonths > 6) {
        cout << "You are qualified for a loan." << endl;
    } else {
        cout << "You do not meet the requirements for a loan." << endl;
    }
}

// Main function to test the loan calculator
int main() {
    cout << "Welcome to Loan Eligibility Calculator!" << endl;
    ianLoanCalculator(); // Call the function to calculate loan eligibility
    return 0;
}
