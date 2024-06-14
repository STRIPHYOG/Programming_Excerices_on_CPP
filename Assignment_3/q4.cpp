#include <iostream>
using namespace std;

class Number {
    int n;  // Encapsulated integer value

public:
    // Setter for n
    void setNumber(int num) {
        n = num;
    }

    // Getter for n
    int getNumber() {
        return n;
    }

    // Method to print the current value of n
    void printNumber() {
        cout << n << endl;
    }

    // Method to check if n is negative
    bool isNegative() {
        return n < 0;
    }

    // Method to check if n is divisible by a given number
    bool isDivisibleBy(int num) {
        // To avoid division by zero error
        if (num == 0) {
            cout << "Error: Division by zero is undefined." << endl;
            return false;
        }
        return n % num == 0;
    }

    // Method to return the absolute value of n
    int absoluteValue() {
        if (n < 0) {
            return -n;
        }
        return n;
    }
};

int main() {
    Number myNumber;
    myNumber.setNumber(-15);

    cout << "The current number is: ";
    myNumber.printNumber();

    cout << "Is the number negative? " << (myNumber.isNegative() ? "Yes" : "No") << endl;
    cout << "Is the number divisible by 3? " << (myNumber.isDivisibleBy(3) ? "Yes" : "No") << endl;
    cout << "Is the number divisible by 5? " << (myNumber.isDivisibleBy(5) ? "Yes" : "No") << endl;
    cout << "Absolute value of the number: " << myNumber.absoluteValue() << endl;

    return 0;
}
