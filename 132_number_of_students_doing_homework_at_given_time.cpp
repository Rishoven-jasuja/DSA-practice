#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans = 0;
        int n = startTime.size();

        for (int i = 0; i < n; i++) {
            int st = startTime[i];
            int en = endTime[i];

            if (st <= queryTime && en >= queryTime) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> startTime = {1, 2, 3,2};
    vector<int> endTime = {3, 2, 7,8};
    int queryTime = 4;

    cout << sol.busyStudent(startTime, endTime, queryTime) << endl;

    return 0;
}
