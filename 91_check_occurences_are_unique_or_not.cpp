#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int> m;
    int n = arr.size();

    // count frequencies
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    unordered_set<int> s;
    for(auto &entry : m){
        s.insert(entry.second);
    }

    return (m.size() == s.size());
}

int main() {
    vector<int> arr = {1,2,2,1,1,3}; 

    if(uniqueOccurrences(arr))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
