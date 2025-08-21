#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; // pointer for placing non-zero elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Before: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    moveZeroes(nums);

    cout << "After:  ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
