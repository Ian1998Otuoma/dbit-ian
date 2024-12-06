#include <iostream>
using namespace std;

int main() {
    int choice;
    int radius, length, width, base, height, area;

    do {
        cout << "Menu:\n";
        cout << "1. Circle Area\n";
        cout << "2. Rectangle Area\n";
        cout << "3. Triangle Area\n";
        cout << "6. Quit\n";
        cout << "Enter choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                area = 3.14 * radius * radius; 
                cout << "Circle Area: " << area << endl;
                break;
            case 2:
                cout << "Enter length and width: ";
                cin >> length >> width;
                area = length * width;
                cout << "Rectangle Area: " << area << endl;
                break;
            case 3:
                cout << "Enter base and height: ";
                cin >> base >> height;
                area = (base * height) / 2;
                cout << "Triangle Area: " << area << endl;
                break;
            case 6:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
