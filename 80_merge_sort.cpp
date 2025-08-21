#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st,int mid,int end ){
    int left=st;
    int right=mid+1;
    vector<int> temp(end-st+1);
    // this is temporary vector for storing elements 
    int idx=0;
    
    while(left<=mid &&right<=end){
        if(arr[left]<=arr[right]){
            temp[idx]=arr[left];
            idx++;
            left++;
            
        }
        
        else{
            temp[idx]=arr[right];
            idx++;
            right++;
        }
    }
        // if left part is remained 
        while(left<=mid){
            temp[idx]=arr[left];
            idx++;
            left++;
        }
        //if right part is remained
         while(right<=end){
            temp[idx]=arr[right];
            idx++;
            right++;
         }
         //put these in arr from temp
         idx=0;
         while(st<=end){
             arr[st]=temp[idx];
             st++;
             idx++;
         }
    }

void mergesort(vector<int>&arr,int st,int end){
    if(st>=end){
        return ;
    }
    int mid=st+(end-st)/2;
    
    // breaking left part
    mergesort(arr,st,mid);
    //breaking right part 
    
    mergesort(arr,mid+1,end);
    
    // now join them by sorting wise
    merge(arr,st,mid,end);
    
}

int main(){
    vector<int> arr={2,4,5,6,7,8,9,1,0,3};
    mergesort(arr,0,9);
    for(int i:arr){
        cout<<i<<" ";
    }
}