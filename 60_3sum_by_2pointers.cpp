#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue; // skip duplicate first element
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0) {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                // skip duplicate second element
                while (j < k && arr[j] == arr[j - 1]) {
                    j++;
                }
                // skip duplicate third element
                while (j < k && arr[k] == arr[k + 1]) {
                    k--;
                }
            }
            else if (sum > 0) {
                k--;
            }
            else {
                j++;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(arr);

    cout << "Unique triplets that sum to zero:\n";
    for (auto &triplet : result) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
