#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 1, 2, 1, 2}; // Example input
    int n = arr.size();
    unordered_map<int, int> m;

    // Count frequency
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    // Find single number
    for (auto entry : m) {
        if (entry.second == 1) {
            cout << "Single number: " << entry.first << endl;
            return 0;
        }
    }

    cout << "No single number found" << endl;
    return 0;
}
