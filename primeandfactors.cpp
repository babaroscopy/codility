#include <iostream>
using namespace std;

// Function to find and print factors of a number
void findFactors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // num is divisible by i, so it's not prime
        }
    }
    return true; // num is prime
}

int main() {
    int number;

    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // Call function to find factors
    findFactors(number);

    // Call function to check if the number is prime
    i(isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
