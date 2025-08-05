#include<iostream>
#include<climits>
using namespace std;

int main() {
    int x = 1289;
    int original = x;  // Save the original number for comparison
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x = x / 10;

        // Overflow check (optional but good practice)
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
            cout << "Overflow occurred. Not a palindrome." << endl;
            return 0;
        }

        rev = rev * 10 + digit;
    }

    cout << "Reversed number: " << rev << endl;

    if (original == rev) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}
