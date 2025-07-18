#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr={7,8,1,2,3,3,3,4,5,6};
    int idx=-1;
    int target=6;
    int st=0;
    int end=arr.size()-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        
        if(arr[mid]==target){
            idx=mid;
            break;
            
        }
        if(arr[st]==arr[mid] && arr[end]==arr[mid]){
            st++;
            end--;
            continue;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st]<=target && target<arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(arr[mid]<target && target<=arr[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    
    if(idx!=-1){
        cout<<" the element is present at the idx "<<idx<<endl;
    }
    else{
        cout<<" the element is not present in arr";
    }
}

