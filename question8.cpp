#include <iostream>

using namespace std;

int main() {
    double totalCost, discount;

    cout << "Enter the total cost: ";
    cin >> totalCost;

    if (totalCost >= 1000) {
        discount = 0.33; // 33% discount for purchases over 1000
    } else if (totalCost >= 500) {
        discount = 0.20; // 20% discount for purchases over 500
    } else if (totalCost >= 250) {
        discount = 0.10; // 10% discount for purchases over 250
    } else {
        discount = 0; // No discount for purchases below 250
    }

    double finalCost = totalCost - (totalCost * discount);

    cout << "Total cost after discount: $" << finalCost << endl;

return 0;
}