#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& arr) {
    unordered_set<int> s;
    int n = arr.size();

    // remove duplicates
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    // move set into vector
    vector<int> ans(s.begin(), s.end());

    // sort in descending order
    sort(ans.begin(), ans.end(), greater<int>());

    // if less than 3 distinct numbers, return max
    if (ans.size() < 3) {
        return ans[0];
    }

    // else return third maximum
    return ans[2];
}

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << "Third maximum: " << thirdMax(nums) << endl;

    vector<int> nums2 = {1, 2};
    cout << "Third maximum: " << thirdMax(nums2) << endl;

    vector<int> nums3 = {3, 2, 1};
    cout << "Third maximum: " << thirdMax(nums3) << endl;

    vector<int> nums4 = {5, 5, 5};
    cout << "Third maximum: " << thirdMax(nums4) << endl;

    return 0;
}
