#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    unordered_set<int> result;
    unordered_set<int> first;

    for (int i = 0; i < n; i++) {
        first.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++) {
        if (first.find(arr2[i]) != first.end()) {
            result.insert(arr2[i]);
        }
    }

    vector<int> ans(result.begin(), result.end());
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1,6,8};
    vector<int> arr2 = {2, 2,6,8};

    vector<int> ans = intersection(arr1, arr2);

    cout << "Intersection: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
