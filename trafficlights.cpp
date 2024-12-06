#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int timer = 1;

    while (timer <= 3) {
        switch (timer) {
            case 1:
                cout << "Traffic Light: Red\n";
                break;
            case 2:
                cout << "Traffic Light: Yellow\n";
                break;
            case 3:
                cout << "Traffic Light: Green\n";
                break;
        }

        this_thread::sleep_for(chrono::seconds(3));
        timer++; // Move to the next light
        if (timer > 3) timer = 1; // Reset to Red after Green
    }

    return 0;
}
