#include<bits/stdc++.h>
using namespace std;
vector <string> str(int n,vector<string> &ans){
    if(n==0){
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    
    map<int, string> m = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}
    };

    
    int digit=n%10;
    if(m.find(digit)!=m.end()){
        ans.push_back(m[digit]);
    }
    
   return str(n/10,ans);
}

int main(){
    int n;
    cout<<" enter your num : ";
    cin>>n;
    vector<string> ans;
    str(n,ans);
    for(string i:ans){
        cout<<i<<" ";
    }
}