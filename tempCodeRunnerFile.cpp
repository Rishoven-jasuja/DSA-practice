#include<iostream>
using namespace std;
// Function to find the maximum sum of a contiguous subarray using Kadane's Algorithm
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
   for(int st=0;st<n;st++){
    for(int end=st;end<n;end++){
        for(int i=st;i<=end;i++){
            cout<<arr[i];
        }

        cout<<" ";
    }
    cout<<endl;
   } 
}
