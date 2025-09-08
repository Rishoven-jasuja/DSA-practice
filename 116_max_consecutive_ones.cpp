#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
    int n = arr.size();
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            ans = max(ans, count);
        } else {
            count = 0;
        }
    }
    return ans;
}

int main() {
    

    vector<int> arr={1,1,0,1,1,1};
    int n = arr.size();
    

    int result = findMaxConsecutiveOnes(arr);
    cout << "Maximum consecutive 1s = " << result << endl;

    return 0;
}
