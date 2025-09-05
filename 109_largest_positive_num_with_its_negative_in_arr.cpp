/*
2441. Largest Positive Integer That Exists With Its Negative
Given an array, return the largest positive integer k 
such that both k and -k exist in the array.
If no such number exists, return -1.
*/

#include <bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    unordered_set<int> s;
    int ans = -1;
    int n = arr.size();

    for (int i : arr) {
        s.insert(i);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s.find(-arr[i]) != s.end()) {
            ans = arr[i];
            break;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {-1, 2, -2, 3};
    cout << findMaxK(arr) << endl; 
    // Output: 2
    return 0;
}
