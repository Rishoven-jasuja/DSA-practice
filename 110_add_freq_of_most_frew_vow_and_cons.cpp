#include <bits/stdc++.h>
using namespace std;

int maxFreqSum(string s) {
    unordered_map<char,int> vowfreq;
    unordered_map<char,int> confreq;
    
    unordered_set<char> vowels = {'a','e','i','o','u'};

    // count frequencies
    for (char c : s) {
        if (vowels.find(c) != vowels.end()) {
            vowfreq[c]++;
        } else {
            confreq[c]++;
        }
    }

    // move into vectors
    vector<pair<char,int>> vow(vowfreq.begin(), vowfreq.end());
    vector<pair<char,int>> con(confreq.begin(), confreq.end());

    // sort by frequency descending
    sort(vow.begin(), vow.end(), [](pair<char,int> &a, pair<char,int> &b) {
        return a.second > b.second;
    });

    sort(con.begin(), con.end(), [](pair<char,int> &a, pair<char,int> &b) {
        return a.second > b.second;
    });

    // handle empty cases
    if (vow.empty() && con.empty()) return 0;
    if (vow.empty()) return con[0].second;
    if (con.empty()) return vow[0].second;

    // both exist
    return vow[0].second + con[0].second;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Max frequency sum = " << maxFreqSum(s) << endl;
    return 0;
}
