#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    stack<char> charStack;
    int length = str.length();

    // Push half of the characters into the stack
    for (int i = 0; i < length / 2; ++i) {
        charStack.push(str[i]);
    }

    // If the length is odd, skip the middle character
    if (length % 2 != 0) {
        length++;
    }

    // Compare the remaining characters with the characters popped from the stack
    for (int i = length / 2; i < length; ++i) {
        if (str[i] != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::tolower); // Convert to lowercase

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
