// #include<iostream>
// #include<vector>
// using namespace std;
// // Function to find the majority element in an array
// vector <int> nums={2,2,1,1,1,2,2};
// int main(){
// for(int val:nums){
// int count=0;
// for(int el:nums){
//     if(el==val)
//     count++;
// }

// if(count>nums.size()/2){
//     cout<<"majority element is : "<<val<<endl;
// }


// else{
//      cout<<"No majority element found"<<endl;
// }
// }
// return 0;
// }


//moore's voting algorithm
#include <iostream>
using namespace std;
// Function to find the majority element using Moore's Voting Algorithm
int main(){
    int freq=0,mjel=0;
    int arr[]={1,2,2,1,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(freq==0){
            mjel=arr[i];
       
        }
        if(arr[i]==mjel){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"majority element is :"<<mjel<<endl;
    return 0;
}