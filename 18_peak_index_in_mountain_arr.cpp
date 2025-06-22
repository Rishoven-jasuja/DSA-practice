#include<iostream>
using namespace std;
int main(){
    int arr[]={0,3,77,9,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=1;
    int end=n-2;
    int idx=-1;
    // because if element is present at start or end then peak can not be formed so start and end element are not included.
    while(st<=end){
     int mid=st+(end-st)/2;
     if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
         idx=mid;
         break;
     }
     else if(arr[mid-1]<arr[mid]){
         st=mid+1;
     }
     else{
         end=mid-1;
     }
    }
    cout<<"the max element of the arr is present at : " <<idx<<endl;
    cout<<"the max elment is :"<<arr[idx]<<endl;
}