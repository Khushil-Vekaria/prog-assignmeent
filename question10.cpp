#include <iostream>

using namespace std;

int main() {
    double balance, withdrawalAmount;

    cout << "Enter your account's current balance: ";
    cin >> balance;

    cout << "Enter the amount you would like to widthdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > balance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > 15000) {
        cout << "Daily withdrawal limit has been reached." << endl;
    } else {
        balance -= withdrawalAmount;
        cout << "Withdrawal successful.Your new balance: $" << balance << endl;
    }

return 0;
}