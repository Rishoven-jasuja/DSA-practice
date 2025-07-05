#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,6,5,4,3};
    int n=6;
    int pivot=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i] <arr[i+1]){
            pivot = i;
            break;
            // We are looking for the first element that is smaller than the next element
            // This is the pivot point where we need to make a change to find the next permutation
        }
    }
    if(pivot==-1){
        for (int i = 0; i < n / 2; i++) {
    swap(arr[i], arr[n - 1 - i]);
  
  // If no pivot is found, it means the array is in descending order
  // In this case, we reverse the entire array to get the smallest permutation
    }
      return 0;
    }
    // next step is to find next larger elements 
    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
            // We are looking for the first element that is larger than the pivot element
            // This is the next larger element that we need to swap with the pivot
        }
    }
    
    // third step to reverse the arr from pivot +1 to the end;
    
   int i=pivot +1,j=n-1;
   while(i<j){
       swap(arr[i],arr[j]);
       i++;
       j--;
       // We reverse the subarray from pivot + 1 to the end of the array
       // This ensures that the elements after the pivot are in ascending order
   }
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
  
}