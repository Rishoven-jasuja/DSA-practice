#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    int n = s.length();

    // Step 1: Store frequency of each character
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }

    // Step 2: Convert map into vector of pairs {char, freq}
    vector<pair<char, int>> vec(m.begin(), m.end());

    // Step 3: Sort by descending frequency
    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    // Step 4: Build result string
    string ans = "";
    for (auto &i : vec) {
        ans.append(i.second, i.first);  
        // append(freq, char) → repeat 'char' freq times
    }

    return ans;
}

int main() {
    string s = "tree";
    string result = frequencySort(s);
    cout << "Sorted by frequency: " << result << endl;
    return 0;
}
