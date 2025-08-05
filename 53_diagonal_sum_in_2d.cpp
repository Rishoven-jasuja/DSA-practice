#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>
#include<climits>
using namespace std;
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        
    };
    int rows=3;
    int cols=3;
    int diag_sum=0;
    int anti_diag_sum=0;
    int total_sum=0;
    // this will calculate the sum of the main diagonal and anti diagonal elements
    // in a 2D matrix
    // main diagonal is from top left to bottom right
    // anti diagonal is from top right to bottom left
   for(int i=0;i<rows;i++){
      
        for(int j=0;j<cols;j++){
          
          if(i==j){
              diag_sum+=matrix[i][j];
              // this will do the sum of the main diagonal elements
          }
          else if(j==rows-i-1){
                anti_diag_sum+=matrix[i][j];
          }

        }
        
    }  
    total_sum=diag_sum+anti_diag_sum;
    cout<< " the main diagonal sum is : "<<diag_sum<<endl;
    cout<< " the anti diagonal sum is : "<<anti_diag_sum<<endl;
    cout<< " the total sum of both diagonals is : "<<total_sum<<endl;
    // 2d vector basics 

    // row is vector.size()
    // column is vector[0].size()
    // this will create a 2D vector and iterate through it
    // to print the elements
    vector<vector<int>> vec={ {1,2,3},{4,5,6}};
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        
    cout<<endl;
}
}