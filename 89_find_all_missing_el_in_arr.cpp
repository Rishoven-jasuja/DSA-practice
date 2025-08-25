#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;
    unordered_set<int> s;

    // Insert all elements into the set
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    // Check for missing numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (s.find(i) == s.end()) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1}; // Example input
    vector<int> result = findDisappearedNumbers(arr);

    cout << "Missing numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
