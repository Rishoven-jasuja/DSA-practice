#include <bits/stdc++.h>
using namespace std;

int countWords(vector<string>& words1, vector<string>& words2) {
    unordered_map<string,int> m1;
    unordered_map<string,int> m2;
    int count = 0;

    for (int i = 0; i < words1.size(); i++) {
        m1[words1[i]]++;
    }

    for (int i = 0; i < words2.size(); i++) {
        m2[words2[i]]++;
    }

    for (auto &i : m1) {
        if (m2.find(i.first) != m2.end() && i.second == 1) {
            if (m2[i.first] == 1) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<string> words1 = {"leetcode", "is", "amazing", "as", "is"};
    vector<string> words2 = {"amazing", "leetcode", "is"};

    int result = countWords(words1, words2);
    cout << "Number of common words with frequency 1: " << result << endl;

    return 0;
}
