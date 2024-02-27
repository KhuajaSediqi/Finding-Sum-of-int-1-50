#include <iostream>
using namespace std;

int main() {
    int positiveInteger;
    int sum = 0; // Initialize the sum to zero

    cout << "Please input a positive integer: ";
    cin >> positiveInteger;

    // Validate input
    if (positiveInteger <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the sum using a loop
    for (int i = 1; i <= positiveInteger; ++i) {
        sum += i; // Add each integer to the sum
    }

    cout << "The sum of integers from 1 to " << positiveInteger << " is: " << sum << endl;

    return 0; // Exit successfully
}
