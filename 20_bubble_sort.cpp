#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
    }
}
    int main(){
        int arr[]={3,4,5,6,78,8,3,8};
        int n=sizeof(arr)/sizeof(arr[0]);
        bubble_sort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    
    }