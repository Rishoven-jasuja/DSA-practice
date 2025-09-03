#include <bits/stdc++.h>
using namespace std;

int canBeTypedWords(string text, string brokenLetters) {
    unordered_set<char> s;
    int count = 0;

    for (int i = 0; i < brokenLetters.size(); i++) {
        s.insert(brokenLetters[i]);
    }

    int st = 0;
    while (st < text.size()) {
        string word = "";

        // build word
        while (st < text.size() && text[st] != ' ') {
            word += text[st];
            st++;
        }

        // check if word can be typed
        bool ok = true;
        for (char ch : word) {
            if (s.find(ch) != s.end()) {
                ok = false;
                break;
            }
        }

        if (!word.empty() && ok) {
            count++;
        }

        // skip space
        st++;
    }

    return count;
}

int main() {
    string text = "hello world";
    string brokenLetters = "ad";

    int result = canBeTypedWords(text, brokenLetters);
    cout << "Number of words that can be typed: " << result << endl;

    return 0;
}
