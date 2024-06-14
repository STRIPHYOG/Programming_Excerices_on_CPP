#include <iostream>

using namespace std;

int main() {
    // Initialize the first two terms
    long long a = 1; // F(1)
    long long b = 1; // F(2)
    int index = 2;   // Because we already know F(1) and F(2)

    // Use a loop to find the first Fibonacci number with 10 digits
    while (b < 1000000000) { // Continue until 10 digits
        long long next = a + b; // Calculate the next Fibonacci number
        a = b; // Move forward in the sequence
        b = next;
        index++; // Increment index
    }

    // Output the index of the first 10-digit Fibonacci number
    cout << "The index of the first term in the Fibonacci sequence to contain 10 digits is: " << index << endl;

    return 0;
}
