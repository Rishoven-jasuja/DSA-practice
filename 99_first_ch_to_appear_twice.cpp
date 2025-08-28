#include <bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s) {
    int n = s.length();
    unordered_map<char, int> m;
    char ans = '\0'; // initialize with null char

    for (int i = 0; i < n; i++) {
        m[s[i]]++;
        if (m[s[i]] == 2) {
            ans = s[i];
            break;
        }
    }
    return ans;
}

int main() {
    string s = "abccbaacz"; // Example string
    char result = repeatedCharacter(s);

    if (result != '\0')
        cout << "First repeated character: " << result << endl;
    else
        cout << "No repeated character found." << endl;

    return 0;
}
