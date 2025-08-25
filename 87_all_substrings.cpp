#include<bits/stdc++.h>
using namespace std;

void subset(string & s,vector<char> &ans,int i, vector<vector<char>> &all){
    if(i==s.length()){
        all.emplace_back(ans);
        return ;
    }
    // include the current idx 
     ans.push_back(s[i]);
     subset(s,ans,i+1,all);
     // including part is done now move to excluding part 
     //so remove the element which is added at last
     ans.pop_back();
     
     // move to excldue
     subset(s,ans,i+1,all);
}
int main(){
    string s="abc";
    vector<char> ans;
    vector<vector<char>> all;
    subset(s,ans,0,all);
    for(auto & i:all){
        cout<< "[ "<<" ";
        for(auto & j:i ){
            cout<<j<<" ";
           
        }
        cout<<" ]" <<endl;
        
    }
}