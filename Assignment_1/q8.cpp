#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double calculate_bill(int units) {
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 0.60;
    } else if (units <= 200) {
        bill = 100 * 0.60 + (units - 100) * 0.80;
    } else if (units <= 300) {
        bill = 100 * 0.60 + 100 * 0.80 + (units - 200) * 0.90;
    } else {
        bill = 100 * 0.60 + 100 * 0.80 + 100 * 0.90 + (units - 300) * 0.90;
    }

    // Minimum charge is Rs. 50.00
    if (bill < 50) {
        bill = 50;
    }

    // Surcharge if the total bill exceeds Rs. 300.00
    if (bill > 300) {
        bill += bill * 0.15;
    }

    return bill;
}

int main() {
    string name;
    int units;
    
    // Read the user's name and unit consumption
    cout << "Enter the user's name: ";
    getline(cin, name);
    
    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Calculate the electricity bill
    double total_bill = calculate_bill(units);

    // Print out the charges with the name
    cout << fixed << setprecision(2);
    cout << "The electricity charges for " << name << " are Rs. " << total_bill << endl;

    return 0;
}
