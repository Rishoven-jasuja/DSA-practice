#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    int n = s.length();
    unordered_map<char, int> m;

    // Increment frequency for s
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }

    // Decrement frequency for t
    for (int i = 0; i < n; i++) {
        m[t[i]]--;
    }

    // Check if all counts are zero
    for (auto entry : m) {
        if (entry.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "listen";
    string t = "silent";

    cout << "String 1: " << s << "\n";
    cout << "String 2: " << t << "\n";

    if (isAnagram(s, t)) {
        cout << "Anagram\n";
    } else {
        cout << "Not an anagram\n";
    }

    return 0;
}
