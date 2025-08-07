#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>> matrix = {
    {1, 4, 7, 11, 15},
    {2, 5, 8, 12, 19},
    {3, 6, 9, 16, 22},
    {10, 13, 14, 17, 24},
    {18, 21, 23, 26, 30}
};

int n=matrix.size();
int m=matrix[0].size();
int row=0;
int col=m-1;
int target=14;
vector<int> ans={-1,-1};
while(row<n&& col>=0){
    if(target==matrix[row][col]){
        ans[0]=row;
        ans[1]=col;
        break;
        
    }
    else if(target>matrix[row][col]){
        row++;
        
    }
    else{
        col--;
    }
}
cout<< "ans is : " <<endl;
for(int i : ans){
    cout<<i<<" ";
}
}