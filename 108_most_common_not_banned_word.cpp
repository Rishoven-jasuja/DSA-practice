/*
Problem: Most Common Word (LeetCode 819)
Given a paragraph and a list of banned words,
return the most frequent non-banned word in lowercase.
*/

#include <bits/stdc++.h>
using namespace std;

string mostCommonWord(string s, vector<string>& banned) {
    unordered_map<string,int> m;
    unordered_set<string> bannedSet(banned.begin(), banned.end());
    string ans;

    int n = s.size();
    int st = 0;

    while (st < n) {
        string word = "";
        while (st < n && isalpha(s[st])) {
            word += char(tolower(s[st]));
            st++;
        }
        if (!word.empty()) {
            m[word]++;
        }
        while (st < n && (s[st] == ' ' || !isalpha(s[st]))) {
            st++;
        }
    }

    vector<pair<string,int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), [](pair<string,int> &a, pair<string,int> &b) {
        return a.second > b.second;
    });

    for (auto &entry : vec) {
        if (bannedSet.find(entry.first) == bannedSet.end()) {
            ans = entry.first;
            break;
        }
    }

    return ans;
}

int main() {
    string s = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};

    cout << mostCommonWord(s, banned) << endl; // Output: ball
    return 0;
}
