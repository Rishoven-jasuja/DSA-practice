#include <iostream>
#include <vector>
using namespace std;

// Recursive Binary Search function
int bs(vector<int>& arr, int target, int st, int end) {
    if (st > end) return -1;  // base case: not found

    int mid = st + (end - st) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] > target) {
        return bs(arr, target, st, mid - 1);  // search left half
    }
    else {
        return bs(arr, target, mid + 1, end); // search right half
    }
}

// Wrapper search function
int search(vector<int>& arr, int target) {
    int n = arr.size();
    if (n == 0) return -1;
    return bs(arr, target, 0, n - 1);
}

int main() {
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int ans = search(arr, target);

    if (ans != -1)
        cout << "Target found at index: " << ans << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
