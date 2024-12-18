#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    // Compare characters from both ends of the string
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // It's a palindrome
}

int main() {
    string str;

    // Input string from user
    cout << "Enter a string: ";
    getline(cin, str);  // Using getline to allow spaces in the input

    // Call function to check if the string is palindrome
    if (isPalindrome(str)) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}
