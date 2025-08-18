#include<bits/stdc++.h>
using namespace std;
void permu(vector<int>&arr,int idx,vector<vector<int>> &ans){
    if(idx==arr.size()){
       ans.push_back({arr});
       return ;
    }
    
    for(int i=idx;i<arr.size();i++){
        swap(arr[idx],arr[i]);
        permu(arr,idx+1,ans);
         swap(arr[idx],arr[i]);
    }
}
int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans;
    permu(arr,0,ans);
     for (auto vec : ans) {
        for (auto num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
}