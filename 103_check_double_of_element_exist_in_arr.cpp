#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        for(int i = 0; i < n; i++){
            m[arr[i]] = i; // element and its index
        }
        for(int j = 0; j < n; j++){
            int prod = arr[j] * 2;
            if(m.find(prod) != m.end() && j != m[prod]){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {10, 2, 5, 3};  // sample input
    if(sol.checkIfExist(arr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
