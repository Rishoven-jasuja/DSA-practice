#include <bits/stdc++.h>
using namespace std;

int findLucky(vector<int>& arr) {
    unordered_map<int,int> m;
    int n = arr.size();

    // count frequencies
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    int ans = -1;
    for(auto &entry : m){
        if(entry.first == entry.second){
            ans = max(ans, entry.first); // keep the largest
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2,2,3,4,4,4,4};
    cout << findLucky(arr) << endl;  // Output: 2
    return 0;
}
