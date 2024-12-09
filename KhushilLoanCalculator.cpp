#include <iostream>
#include <string>
using namespace std;

// Function to check loan qualification
bool KhushilLoanCalculator(int age, double bankBalance, const string& crbStatus, int monthsAsCustomer) {
    return (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6);
}

int main() {
    // Variables to store user input
    int age, monthsAsCustomer;
    double bankBalance;
    string crbStatus;

    // Collecting user details
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bankBalance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter the number of months you've been a customer: ";
    cin >> monthsAsCustomer;

    // Check loan eligibility
    if (KhushilLoanCalculator(age, bankBalance, crbStatus, monthsAsCustomer)) {
        cout << "Congratulations! You qualify for the loan." << endl;
    } else {
        cout << "Sorry, you do not qualify for the loan." << endl;
    }

    return 0;
}