// this is the problem 219 on leetcode 
// in this problem we are given an array of integers and an integer k
// we need to find if there are two distinct indices i and j such that 
// nums[i] == nums[j] and abs(i - j) <= k

// meas if same element appears at two different indices and there diffrence is less than or equal to k then return true

#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& arr, int k) {
    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++) {
        if (m.count(arr[i]) && i - m[arr[i]] <= k) {
            return true;
        }
        m[arr[i]] = i;
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    if (containsNearbyDuplicate(nums, k)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}
