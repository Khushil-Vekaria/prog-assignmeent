#include <iostream>
#include <cmath>

using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Close" << endl;
    cout << "Enter your numbers: ";
}

int main() {
    int choice;
    double radius, length, width, base, height, area;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius;
                cout << "The area of the circle is: " << area << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
                break;
            case 3:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                area = 0.5 * base * height;
                cout << "The area of the triangle is: " << area << endl;
                break;
            case 4:
                cout << "Closing the program." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

return 0;
}