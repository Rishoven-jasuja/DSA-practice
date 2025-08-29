// C++ program to find the first common element in two arrays

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int getCommon(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    unordered_set<int> s;

    // Insert elements of arr1
    for(int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }

    // Check for common element in arr2
    for(int j = 0; j < arr2.size(); j++) {
        if(s.find(arr2[j]) != s.end()) {
            return arr2[j];  // first common element
        }
    }

    return -1;  // if no common element
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 4};

    int result = getCommon(arr1, arr2);

    if(result != -1)
        cout << "First common element = " << result << endl;
    else
        cout << "No common element found" << endl;

    return 0;
}
