#include <bits/stdc++.h>
using namespace std;

int countCharacters(vector<string>& words, string chars) {
    unordered_map<char,int> m;
    int n = chars.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        m[chars[i]]++;
    }

    for (int i = 0; i < words.size(); i++) {
        unordered_map<char,int> temp = m;
        bool loop_complete = true;
        string str = words[i];

        for (char c : str) {
            if (temp[c] != 0) {
                temp[c]--;
            } else {
                loop_complete = false;
                break;
            }
        }

        if (loop_complete) {
            count += str.size();
        }
    }

    return count;
}

int main() {
    vector<string> words = {"cat","bt","hat","tree"};
    string chars = "atach";

    cout << countCharacters(words, chars) << endl; // Expected output: 6

    return 0;
}
