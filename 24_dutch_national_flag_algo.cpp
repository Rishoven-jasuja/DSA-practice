#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1,1};
    int n=13;
    int low=0;
    int mid=0;
    int high=n-1;
    
    // here low the region from 0 to low - 1 will reprsent the region of no. of zeroes,
    // and the region of low to mid -1 will represents the regions of ones.
    // the region of mid to high will represent the unsorted part of the arr.
    //the region of high +1 to n-1 will contain twos.
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
            
            // here we have swapped the mid and low which results in increase an element in 0 to low -1 portion so low increases ,
            // also the swapped elements is must one as at low one is present so portion till mid becomes sorted ,so we have to increase mid by one .
        }
        else if(arr[mid]==1){
            mid++;
            
            // as the elments between low to mid -1 are also 1 so we dont need to swap just shift mid to mid+1;
            
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
            //here 2 lies bw the portion of high +1 to n-1 so when we just have to add our mid two before the high so it becomes high -1 // so we not need to change the mid
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}