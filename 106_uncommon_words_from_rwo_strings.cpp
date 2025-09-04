#include <bits/stdc++.h>
using namespace std;

vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string,int> map1;
    vector<string> ans;

    int st = 0;
    while (st < s1.size()) {
        string word = "";
        while (st < s1.size() && isalpha(s1[st])) {
            word += s1[st];
            st++;
        }
        if (!word.empty()) {
            map1[word]++;
        }

        while (st < s1.size() && (s1[st] == ' ' || !isalpha(s1[st]))) {
            st++;
        }
    }

    unordered_map<string,int> map2;
    int st2 = 0;
    while (st2 < s2.size()) {
        string word = "";
        while (st2 < s2.size() && isalpha(s2[st2])) {
            word += s2[st2];
            st2++;
        }
        if (!word.empty()) {
            map2[word]++;
        }

        while (st2 < s2.size() && (s2[st2] == ' ' || !isalpha(s2[st2]))) {
            st2++;
        }
    }

    for (auto &word : map1) {
        if (word.second == 1 && map2[word.first] == 0) {
            ans.push_back(word.first);
        }
    }

    for (auto &word : map2) {
        if (word.second == 1 && map1[word.first] == 0) {
            ans.push_back(word.first);
        }
    }

    return ans;
}

int main() {
    string s1 = "this apple is sweet";
    string s2 = "this apple is sour";

    vector<string> result = uncommonFromSentences(s1, s2);

    cout << "Uncommon words:\n";
    for (auto &w : result) {
        cout << w << "\n";
    }

    return 0;
}
