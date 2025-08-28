#include <bits/stdc++.h>
using namespace std;

bool areOccurrencesEqual(string s) {
    int n = s.length();
    unordered_map<char, int> m;  

    for (char c : s) {
        m[c]++;
    }

    int occ = m[s[0]];  // frequency of first character

    for (auto &i : m) {
        if (i.second != occ) {
            return false;
        }
    }
    return true;
}

int main() {
    string s = "abacbc"; // Example string

    if (areOccurrencesEqual(s)) {
        cout << "All characters have equal occurrences." << endl;
    } else {
        cout << "Characters do not have equal occurrences." << endl;
    }

    return 0;
}
