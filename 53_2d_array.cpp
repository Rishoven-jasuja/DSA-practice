#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>
#include<climits>
using namespace std;
int main(){
    int matrix[4][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int rows=4;
    int cols=3;
    
    cout<<" this is the way for accessing any particular elemet "<<matrix[2][1]<<endl;
    // this is used ot access any value
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;;
    }
    // this is method to print all the elements of 2d array
    // same way can be used to take input
    
    
    int target=12;
    vector<int> ans;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           if(matrix[i][j]==target){
               ans.push_back(i);
               ans.push_back(j);
               break;
           }
        }
        
    }
    
    if(ans.size()!=0){
        cout<<" yes the element is found at cell of  : ";
        for(int i:ans){
            cout<<i<<" ";
            
        }
        cout<<endl;
    }
    else{
        cout<<" no,element is not found in the arr "<<endl;
    }
    
    int row_sum=INT_MIN;
     
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=matrix[i][j];
        }
        row_sum=max(row_sum,sum);
        
    }
    cout<< " the max possible row sum  is : "<<row_sum<<endl;
    
    int max_colsum=INT_MIN;
    for(int j=0;j<cols;j++){
    
        int sum=0;

         for(int i=0;i<rows;i++){
          
             sum+=matrix[i][j];
          
        }
         max_colsum=max(max_colsum,sum);
    }
    cout<< " the max possible col sum  is : "<<max_colsum<<endl;
    
    return 0;
}