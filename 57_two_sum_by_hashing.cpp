#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,7,11,15};
    int n=arr.size();
    int target=17;
    unordered_map<int,int> m;
    
    vector<int> ans;
    
    for(int i=0;i<n;i++){
        int first=arr[i];
        int second=target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    cout<<" the ans is : "<<endl;
    for(int i:ans){
        cout<<i<<" ";
        
    }
    return 0;
}