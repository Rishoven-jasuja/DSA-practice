// Problem:  Set Mismatch
// in this problem we are given an array of n integers where each integer is in the range [1, n] inclusive.
// There is only one duplicate number in the array, find the duplicate and the missing number.
//we have to return an array of size 2 where the first element is the duplicate number and the second element is the missing number.
#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;
    unordered_map<int,int> m;

    // Count frequency of each number
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    // Find the duplicate number
    for(auto &entry:m){
        if(entry.second != 1){
            ans.push_back(entry.first);
            break;
        }
    }

    // Find the missing number
    for(int i=1;i<=n;i++){
        if(m.find(i) == m.end()){
            ans.push_back(i);
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,2,4};  // Example input
    vector<int> result = findErrorNums(arr);

    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
