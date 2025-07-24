#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr={44,55,77,-7,9,8,0,1,2,3,4,5,6};
    int low=0;
    int n=arr.size();
    int high=n-1;
    int ans=INT_MAX;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){
            ans=min(arr[low],ans);
           
            low=mid+1;
            // this means that if left part of array is soted that min ele can be only present on the first element 
            
            // so it will pick min from that range.but after that there is possiblity that overall min element may exist in the other half.
            
            // so chech both halfs;
            
    }
        
    
    else{
        ans=min(arr[mid],ans);
      
        high=mid-1;
    }
    }
    
    cout<< " the min element present in this arr is "<< ans<<endl;
    return 0;
}