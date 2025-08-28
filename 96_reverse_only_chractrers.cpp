#include <bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s) {
    int n = s.length();
    int st = 0, end = n - 1;

    while (st < end) {
        // Move st forward until a letter is found
        while (st < end && !isalpha(s[st])) {
            st++;
        }

        // Move end backward until a letter is found
        while (st < end && !isalpha(s[end])) {
            end--;
        }

        // Swap the letters
        swap(s[st], s[end]);
        st++;
        end--;
    }

    return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = reverseOnlyLetters(s);
    cout << "Reversed string (letters only): " << result << endl;

    return 0;
}
