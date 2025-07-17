#include<iostream>
#include<vector>
using namespace std;
int l_b(vector<int> &arr,int target){
    int st=0;
    int end=arr.size()-1;
    int lb=arr.size();
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>=target){
            lb=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return lb;
}


// for upperbound 
int u_b(vector<int> &arr,int target){
    int st=0;
    int end=arr.size()-1;
    int ub=arr.size();
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>target){
            ub=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ub;
}

int main(){
    
vector<int> arr={2,4,6,8,8,8,11,13};
int target=8;
int n=arr.size();
int lower=l_b(arr,target);

int upper=u_b(arr,target);
vector<int> ans={-1,-1};
 if(lower<n&& arr[lower]==target){
 ans[0]=lower;
 ans[1]=upper-1;
}
 cout<<"the ans is :"<<endl;
 for(int i:ans){
     cout<<i<<" ";
 }
}
