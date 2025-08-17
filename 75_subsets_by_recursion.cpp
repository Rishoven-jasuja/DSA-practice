#include <bits/stdc++.h>
using namespace std;

void subset(int i, vector<int> &arr, vector<int> &ans) {
    if (i == arr.size()) {
        for (int val : ans) cout << val << " ";
        cout << endl;
        return;
    }

    // Choice 1: include arr[i]
    ans.push_back(arr[i]);
    subset(i+1, arr, ans);
    ans.pop_back(); // backtrack

    // Choice 2: exclude arr[i]
    subset(i+1, arr, ans);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    subset(0, arr, ans);
    return 0;
}
