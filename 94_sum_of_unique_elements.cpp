#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int>& arr) {
    unordered_map<int,int> m;
    int n = arr.size();

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    int sum = 0;
    for(auto &i:m){
        if(i.second == 1){
            sum += i.first;
        }
    }
    return sum;
}

int main() {
    vector<int> arr = {1,2,3,2}; // example input
    cout << "Sum of unique elements: " << sumOfUnique(arr) << endl;
    return 0;
}
