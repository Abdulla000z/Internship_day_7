#include <iostream>
#include <string>
#include <algorithm> // for tolower
using namespace std;

// Function to count vowels
int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c); // Convert to lowercase for easy comparison
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            ++count;
    }
    return count;
}

// Function to reverse the string
string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

// Function to check if the string is a palindrome
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        ++left;
        --right;
    }
    return true;
}

// Main function
int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // Read full line including spaces

    string reversed = reverseString(input);
    int vowels = countVowels(input);
    bool palindrome = isPalindrome(input);

    cout << "\n=== String Analysis ===" << endl;
    cout << "Original String : " << input << endl;
    cout << "Reversed String : " << reversed << endl;
    cout << "Vowel Count     : " << vowels << endl;
    cout << "Palindrome      : " << (palindrome ? "Yes" : "No") << endl;

    return 0;
}
