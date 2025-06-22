// this method is used to search an element in a rotated sorted array.
// it has time compexity of O(log n) and space complexity of O(1).
// The array is rotated at some pivot, and we need to find the target element.
#include<iostream>
using namespace std;

int main(){
    int arr[]={7,8,9,10,0,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0;
    int end=n-1;
    int target=44;
    int idx=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            idx=mid;
            
            break;
        }
    
    else if(arr[st]<=arr[mid]){ // this will check if the left part is sorted or not
        // if the left part is sorted then we will check if the target lies in that part
        if(arr[st]<=target&&target<=arr[mid]){
            end=mid-1;
            // if the target lies in the left part then we will search in that part
            // so here we if element is found in the left part then we will update the end index
        }
        else{
            // if the target does not lie in the left part then we will search in the right part
            // so here we if element is found in the right part then we will update the start
            st=mid+1;
        }
    }
    else{ // this will check if the right part is sorted or not
        // if the right part is sorted then we will check if the target lies in that part
        if(arr[mid]<=target&&target<=arr[end]){
            // if the target lies in the right part then we will search in that part
            // so here we if element is found in the right part then we will update the start index
            st=mid+1;
        }
        else{
            // if the target does not lie in the right part then we will search in the left part
            end=mid-1;
        }
    }  
    }
    if(idx!=-1){
        cout<<"the element is found at the idx :"<<idx<<endl;
    }
    else{
        cout<<"the element is not present in the arr";
    }
}

