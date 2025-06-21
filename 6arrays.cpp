#include<iostream>
using namespace std;

int min(int arr[],int n){
    int minval=arr[0];
    for(int i=0;i<n;i++){
        if (minval>arr[i]){
         minval=arr[i];
        }
       
        
    }
  return minval;
}
int main(){
    // int marks[5] = {90, 85, 78, 92, 88}; // Array of marks
    // cout<<"marks of students are: ";
    // for(int i=0;i<5;i++){
    //     cout<<marks[i] << " ";
    // }
    int n;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"the elments are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int min_val=min(arr,n);
    cout<<"the min elements in the array is "<<min_val<<endl;
return 0;
}