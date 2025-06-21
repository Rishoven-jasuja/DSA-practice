 #include<iostream>
 #include<vector>
using namespace std;

int main() {
    int nums[4] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    // Output the result
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}