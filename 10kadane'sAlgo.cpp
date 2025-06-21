#include<iostream>
#include<climits> // Needed for INT_MIN

using namespace std;
// below code is used to find all the subarrays of an array
// int main(){
//     int n=5;
//     int arr[n]={1,2,3,4,5};
//    for(int st=0;st<n;st++){
//     for(int end=st;end<n;end++){
//         for(int i=st;i<=end;i++){
//             cout<<arr[i];
//         }

//         cout<<" ";
//     }
//     cout<<endl;
//    } 
// }
// brute force approach to find the maximum sum of subarray
// int main(){
//     int n=5;
//     int arr[5]={1,3,4,56,5};
// int maxSum=0;
// for (int st=0;st<n;st++){
//     int currSum=0;
//     for(int end=st;end<n;end++){
//         currSum=currSum+arr[end];
//         maxSum=max(maxSum,currSum);
//     }
// } 
// cout<<"the max sum of subarray is :"<<maxSum<<endl;

// // time complexity of brute force approach i so(n^2)
// return 0;
// }
// calculating mas sum using kadane's algorithm 

int main(){
    int n=9;
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
        int currSum=0;    
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){

    currSum=currSum+arr[i];
    maxSum=max(maxSum,currSum);
    if(currSum<0){
        currSum=0;
    }
    }
    cout<<"the max sum of subarray is"<<maxSum<<endl;
    return 0;
}