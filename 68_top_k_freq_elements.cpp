#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1, 1, 1,3,3,3,2,2,2, 2, 2, 3};
int k = 2;
int n=arr.size();
unordered_map<int,int> m;
for(int i=0;i<n;i++){
    m[arr[i]]++;
}
// till now we have entered the element with respective freq

//now we have to put it in arr 
vector<pair<int,int>> vec;

for(auto & entry:m){
    vec.push_back(make_pair(entry.first,entry.second));
}
// now sort this function in descending order of freq

sort(vec.begin(),vec.end(), [] (const pair<int ,int> &a,const pair<int ,int> &b){
    return a.second>b.second;
});

// we have got vector in highest freq at first
vector<int> result;
for(int i=0;i<k;i++){
    result.push_back(vec[i].first);
}
for(int i:result){
    cout<<i<<" ";
}
return 0;
}