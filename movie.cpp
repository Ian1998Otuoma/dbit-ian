#include <iostream>
using namespace std;

int main() {
    int age, ticketPrice;
    string movieType;

    cin >> age;
    cin >> movieType;

    if (age < 12) {
        if (movieType == "regular") {
            ticketPrice = 200;
        } else if (movieType == "3D") {
            ticketPrice = 300;
        } else {
            return 1;
        }
    } else if (age >= 12 && age <= 60) {
        if (movieType == "regular") {
            ticketPrice = 500;
        } else if (movieType == "3D") {
            ticketPrice = 700;
        } else {
            return 1;
        }
    } else {
        if (movieType == "regular") {
            ticketPrice = 300;
        } else if (movieType == "3D") {
            ticketPrice = 500;
        } else {
            return 1;
        }
    }

    cout << "KES " << ticketPrice << endl;

    return 0;
}
