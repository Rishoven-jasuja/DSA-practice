#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    int n = names.size();
    vector<pair<string,int>> vec;
    
    for(int i = 0; i < n; i++) {
        vec.push_back({names[i], heights[i]});
    }
    
    // sort by height in descending order
    sort(vec.begin(), vec.end(), [](pair<string,int> &a, pair<string,int> &b) {
        return a.second > b.second;
    });
    
    vector<string> ans;
    for(auto &i : vec) {
        ans.push_back(i.first);
    }
    
    return ans;
}

int main() {
    vector<string> names = {"Mary","John","Emma"};
    vector<int> heights = {180,165,170};

    vector<string> result = sortPeople(names, heights);

    cout << "Sorted people by height: ";
    for(string &name : result) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
