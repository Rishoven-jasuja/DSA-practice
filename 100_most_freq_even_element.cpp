#include <bits/stdc++.h>
using namespace std;

int mostFrequentEven(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int,int> m;

    // count only even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            m[arr[i]]++;
        }
    }

    vector<pair<int,int>> vec;
    for (auto &entry : m) {
        vec.push_back({entry.first, entry.second});
    }

    sort(vec.begin(), vec.end(), [] (pair<int,int> &a, pair<int,int> &b) {
        if (a.second == b.second) {
            return a.first < b.first;  // smaller number first if same frequency
        }
        return a.second > b.second;    // higher frequency first
    });

    for (auto &i : vec) {
        if (i.first % 2 == 0) {
            return i.first;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {4, 4, 1, 2, 2, 2, 3, 4};  // example input

    int ans = mostFrequentEven(arr);
    cout << "Most frequent even number: " << ans << endl;

    return 0;
}
