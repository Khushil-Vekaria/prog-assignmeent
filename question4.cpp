#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (num1 > num2) {
        case 1:
            cout << "The highest number is: " << num1 << endl;
            break;
        case 0:
            switch (num1 < num2) {
                case 1:
                    cout << "The highest number is: " << num2 << endl;
                    break;
                case 0:
                    cout << "Both numbers are equal." << endl;
                    break;
            }
            break;
    }

return 0;
}