#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    int answer = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int total = 0;

        for (int num : nums) {
            total += ceil((double)num / mid);
        }

        if (total <= threshold) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    
    int result = smallestDivisor(nums, threshold);
    cout << "Smallest divisor: " << result << endl;

    return 0;
}
