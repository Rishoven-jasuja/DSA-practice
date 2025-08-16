#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int threeSumClosest(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    
    int closesum = arr[0] + arr[1] + arr[2]; // initialize with first 3 numbers

    for (int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;

        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];

            // update closest sum if this is better
            if (abs(sum - target) < abs(closesum - target)) {
                closesum = sum;
            }

            if (sum == target) {
                return sum; // perfect match
            } 
            else if (sum > target) {
                k--; // need smaller sum
            } 
            else {
                j++; // need bigger sum
            }
        }
    }
    return closesum;
}

int main() {
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;

    int ans = threeSumClosest(arr, target);
    cout << "Closest sum = " << ans << endl;  

    return 0;
}
