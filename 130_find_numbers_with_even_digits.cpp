#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int num = arr[i];
            int count = 0;

            if (num == 0) count = 1; // handle zero separately

            while (num != 0) {
                num = num / 10;
                count++;
            }

            if (count % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = obj.findNumbers(arr);
    cout << "Count of numbers with even digits = " << result << endl;

    return 0;
}
