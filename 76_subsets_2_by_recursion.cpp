#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsets(vector<int>& arr, vector<int> ans, int i, vector<vector<int>>& allsubsets) {
    if (i == arr.size()) {
        allsubsets.push_back(ans);
        return;
    }

    // Include current element
    ans.push_back(arr[i]);
    subsets(arr, ans, i + 1, allsubsets);

    // Backtrack
    ans.pop_back();

    // Skip duplicates
    int idx = i + 1;
    while (idx < arr.size() && arr[idx] == arr[idx - 1]) {
        idx++;
    }

    // Exclude current element
    subsets(arr, ans, idx, allsubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // sort to handle duplicates
    vector<int> ans;
    vector<vector<int>> allsubsets;
    subsets(nums, ans, 0, allsubsets);
    return allsubsets;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(nums);

    cout << "Subsets:\n";
    for (auto subset : result) {
        cout << "[";
        for (int x : subset) {
            cout << x;
        }
        cout << "]\n";
    }

    return 0;
}
