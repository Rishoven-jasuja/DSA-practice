#include<bits/stdc++.h>
using namespace std;
void sub_sum(vector<int> & arr,int i,vector<int> &ans,int sum){
    
    if(i==arr.size()){
        ans.push_back(sum);
        return ;
    }
    
    // include the element for sum
    sub_sum(arr,i+1,ans,sum+arr[i]);

// exclude the element    
    sub_sum(arr,i+1,ans,sum);
    
    
}

int main(){
    vector<int> arr={3,4,5};
    vector<int> ans;
    sub_sum(arr,0,ans,0);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}