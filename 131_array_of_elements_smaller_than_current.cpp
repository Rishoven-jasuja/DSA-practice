#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (arr[j] < curr) count++;
            }
            ans.push_back(count);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {8, 1, 2, 2, 3};
    vector<int> res = sol.smallerNumbersThanCurrent(arr);

    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}
