#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;

    int n = words.size();
    unordered_map<string, int> m;

    // Step 1: Count frequency of each word
    for (int i = 0; i < n; i++) {
        m[words[i]]++;
    }

    // Step 2: Move map data into a vector of pairs
    vector<pair<string, int>> vec;
    for (auto &word : m) {
        vec.push_back(make_pair(word.first, word.second));
    }

    // Step 3: Sort by frequency desc, then lexicographical order
    sort(vec.begin(), vec.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        if (a.second == b.second) {
            return a.first < b.first; // 
            // if frequencies are equal, sort lexicographically
            // so here we are using < which is used for ascending order so its return true if a comes before b lexicographically
            // and false if b comes before a
        }
        return a.second > b.second; // higher frequency first

    // here we have used > which is used for descending order so its return true if a comes before b in terms of frequency
    });

    // Step 4: Get top K frequent words
    vector<string> result;
    for (int i = 0; i < k; i++) {
        result.push_back(vec[i].first);
    }

    // Step 5: Print result
    for (string &word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
