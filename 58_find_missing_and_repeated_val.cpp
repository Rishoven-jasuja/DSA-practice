#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<vector<int>> grid={
    {1, 2, 3},
    {4, 2, 6},
    {7, 8, 9}
};

vector<int> ans;
int n=grid.size();
int m=grid[0].size();
unordered_set<int> s;

 for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s.find(grid[i][j])==s.end()){
                 s.insert(grid[i][j]);
                }
                else{
                    ans.push_back(grid[i][j]);
                    
                }
            }
        } // upper loop end which already adds the repeated no in the ans
            for(int i=1;i<=n*n;i++){
             if(s.find(i)==s.end()){
                ans.push_back(i);
                break;
             }
            }
        // this is for adding missing value to the ans
        for(int i:ans){
            cout<<i<<" ";
        }
}