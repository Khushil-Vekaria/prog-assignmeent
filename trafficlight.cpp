#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

enum TrafficLightState { Red, Yellow, Green };

void displayTrafficLight(TrafficLightState state) {
    switch (state) {
        case Red:
            cout << "Red Light" << endl;
            break;
        case Yellow:
            cout << "Yellow Light" << endl;
            break;
        case Green:
            cout << "Green Light" << endl;
            break;
    }
}

int main() {
    TrafficLightState state = Red;
    while (true) {
        displayTrafficLight(state);
        switch (state) {
            case Red:
                this_thread::sleep_for(chrono::seconds(30));
                state = Green;
                break;
            case Yellow:
                this_thread::sleep_for(chrono::seconds(5));
                state = Red;
                break;
            case Green:
                this_thread::sleep_for(chrono::seconds(30));
                state = Yellow;
                break;
        }
    }
return 0;
}