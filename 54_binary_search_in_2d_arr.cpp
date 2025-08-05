#include<iostream>
#include<vector>
#include<utility>
using namespace std;

vector<int> search_in_row(vector<vector<int>> &matrix ,int target,int row){
    int st=0;
    int n=matrix[0].size();
    int end=n-1;
    vector<int> ans={-1,-1};
    
    while(st<=end){
        int mid=st+(end-st)/2;
        
        if(matrix[row][mid]==target){
            ans[0]=row;
            ans[1]=mid;
            break;
        }
        else if(matrix[row][mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix={
        {1,2,5,7},
        {10,14,17,20},
        {23,27,34,40}
};
int m=matrix.size();
int n=matrix[0].size();


int strow=0;
int endrow=m-1;
int target=50;
vector<int> ans={-1,-1};
while(strow<=endrow){
    int midrow=strow+(endrow-strow)/2;
    
    if(matrix[midrow][0]<=target && target<=matrix[midrow][n-1]){
        ans=search_in_row(matrix,target,midrow);
        break;
    }
    else if(matrix[midrow][n-1]<target){
        strow=midrow+1;
    }
    else{
        endrow=midrow-1;
    }
}
    if(ans[0] != -1 && ans[1] != -1){

        cout<<" yes the element is present at : "<<endl;
        for(int i:ans){
            cout<<i<<" ";
        }
    }
    else{
        cout<<" no target is not found";
    }
    return 0;
}