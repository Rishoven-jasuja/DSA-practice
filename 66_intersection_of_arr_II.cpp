// this is used to find the intersection of two arrays
//but adding the condition that the intersection should be in the order of the first array
// if any element is present 2 times in both arr then it should be present 2 times in the ans
// this is done using unordered_map to store the frequency of elements in the first array
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr1[i]]++;
    }
    for (int i = 0; i < m; i++) {
        if (freq[arr2[i]] > 0) {
            ans.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3};
    vector<int> arr2 = {2, 2, 4};

    vector<int> result = intersect(arr1, arr2);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
