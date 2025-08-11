#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// brute force approach
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for (int st = 0; st < n; st++) {
        int sum = 0;
        for (int end = st; end < n; end++) {
            sum += nums[end];
            if (sum == k) {
                count++;
            }
        }
    }
    return count;
}


int optimal_s_s(vector<int> & arr,int k){
    int n=arr.size();
    int count=0;
    
    unordered_map<int, int> prefixSumCount;
    vector<int> ps(n,0);
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i];

    }
    // now we have all the prefix sum in ps vector
    for(int i=0;i<n;i++){

        if(ps[i]==k){
            count++;
        }
        int val=ps[i]-k;
        if(prefixSumCount.find(val) != prefixSumCount.end()) {
            count += prefixSumCount[val];
        }
        prefixSumCount[ps[i]]++;

    }
    return count;
}

int main() {
    vector<int> nums = {1, 2, 1, 2, 1}; // Example array
    int k = 3;

    cout << "Count of subarrays with sum " << k << " = " 
         << optimal_s_s(nums,k) << endl;

    return 0;
}
