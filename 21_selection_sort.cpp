 #include<iostream>
 using namespace std;
 void selection_sort(int arr[],int n){
   
     for(int i=0;i<n-1;i++){
           int min_idx=i;
           for(int j=i+1;j<n;j++){
         if(arr[min_idx]>arr[j]){
             min_idx=j;
         }               
           }
           swap(arr[i],arr[min_idx]);
     }
 }
 int main(){
     int n=9;
     int arr[]={4,3,6,4,3,2,4,5,0};
     selection_sort(arr,n);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }