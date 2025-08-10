#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }
            int p = j + 1;
            int q = n - 1;

            while (p < q) {
                long long sum = 1LL * arr[i] + arr[j] + arr[p] + arr[q];
                if (sum == target) {
                    ans.push_back({arr[i], arr[j], arr[p], arr[q]});
                    p++;
                    q--;

                    while (p < q && arr[p] == arr[p - 1]) {
                        p++;
                    }
                    while (p < q && arr[q] == arr[q + 1]) {
                        q--;
                    }

                } else if (sum > target) {
                    q--;
                } else {
                    p++;
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = fourSum(arr, target);

    // Printing the result
    for (auto &quad : result) {
        cout << "[ ";
        for (int num : quad) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
