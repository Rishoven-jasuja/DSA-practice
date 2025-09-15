
#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& arr, int k) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < k) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 3, 7, 2};
    int k = 4;
    cout << minOperations(arr, k) << endl;  // Example usage
    return 0;
}
