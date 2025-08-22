#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int st,int end){
    int pos=st;
    for(int i=st;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
            
        }
        
    }
    return pos-1;
    // pivot pos is added one last time which is refering to next idx so sub -1
}
void quick_sort(vector<int> &arr,int st,int end){
    if(st>=end){
        return ;
        
    }
    // now we have to pick the last element and find its correct place 
    int pivot=partition(arr,st,end);
    
    // no do same thing with left part
    quick_sort(arr,st,pivot-1);
    
    // also right part
    quick_sort(arr,pivot+1,end);
    
}
int main(){
    vector<int> arr={2,5,7,6,5,8,9,0,6,43,33};
    int n=arr.size();
    quick_sort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
}