#include <iostream>

using namespace std;

// Function to calculate the sum of the digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Extract the last digit
        num /= 10;       // Remove the last digit
    }
    return sum;
}

// Function to check if a number is a Harshad number
bool isHarshad(int num) {
    int sum = sumOfDigits(num); // Calculate the sum of digits
    return (num % sum == 0);    // Check if the number is divisible by the sum
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHarshad(num)) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }

    return 0;
}
