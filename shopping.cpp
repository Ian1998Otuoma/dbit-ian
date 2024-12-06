#include <iostream>
using namespace std;

int main() {
    int purchaseAmount, discount, totalCost;

    cout << "Enter the total purchase amount (KES): ";
    cin >> purchaseAmount;

    if (purchaseAmount >= 1000) {
        discount = 20;
    } else if (purchaseAmount >= 500) {
        discount = 10;
    } else if (purchaseAmount >= 200) {
        discount = 5;
    } else {
        discount = 0;
    }

    totalCost = purchaseAmount - (purchaseAmount * discount / 100);

    cout << "Discount applied: " << discount << "%" << endl;
    cout << "Total cost after discount: KES " << totalCost << endl;

    return 0;
}
