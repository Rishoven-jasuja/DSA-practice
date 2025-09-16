// LeetCode 278: First Bad Version
// Find the first version that is bad using minimum API calls.

#include <bits/stdc++.h>
using namespace std;

// Mock API (on LeetCode this is already defined)
int firstBad = 3;
bool isBadVersion(int version) {
    return version >= firstBad;
}

// Binary Search
int firstBadVersion(int n) {
    int st = 1, end = n, ans = n;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isBadVersion(mid)) { 
            ans = mid; 
            end = mid - 1; 
        } else st = mid + 1;
    }
    return ans;
}

int main() {
    int n = 7;
    cout << "First Bad Version: " << firstBadVersion(n) << endl;
    return 0;
}
