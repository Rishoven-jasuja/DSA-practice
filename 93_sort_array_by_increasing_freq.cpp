// Problem:  Sort Array by Increasing Frequency
// Given an array of integers, sort the array in increasing order based on the frequency of the values.
// If multiple values have the same frequency, sort them in decreasing order.
#include <bits/stdc++.h>
using namespace std;

vector<int> frequencySort(vector<int>& arr) {
    unordered_map<int,int> m;

    // Step 1: count frequencies
    for(int num : arr){
        m[num]++;
    }

    // Step 2: move to vector of pairs
    vector<pair<int,int>> freq(m.begin(), m.end());

    // Step 3: sort by frequency (asc), and by value (desc) if tie
    sort(freq.begin(), freq.end(), [](auto &a, auto &b){
        if(a.second == b.second)
            return a.first > b.first;   // higher value first if same frequency
        return a.second < b.second;     // lower frequency first
    });

    // Step 4: rebuild result
    vector<int> ans;
    for(auto &p : freq){
        for(int i=0; i<p.second; i++){
            ans.push_back(p.first);
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2,3,1,3,2};
    vector<int> ans = frequencySort(arr);

    for(int x : ans) cout << x << " ";
    // Expected output: 1 3 3 2 2

    return 0;
}
