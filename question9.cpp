#include <iostream>

using namespace std;

int main() {
    int age;
    char movieType;
    double ticketPrice;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Enter the movie type you would like (R for regular, 3 for 3D): ";
    cin >> movieType;

    if (age < 18) {
        ticketPrice = (movieType == 'R') ? 5 : 10; // Children's ticket pricing
    } else if (age >= 60) {
        ticketPrice = (movieType == 'R') ? 7 : 12; // Senior citizen ticket pricing
    } else {
        ticketPrice = (movieType == 'R') ? 10 : 15; // Regular adult ticket pricing
    }

    cout << "Your ticketa price is : $" << ticketPrice << endl;

return 0;
}