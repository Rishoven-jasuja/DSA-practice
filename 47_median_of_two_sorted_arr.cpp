#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1={1,4,5,7,9,88};
    int m =arr1.size();
    vector<int> arr2={2,3,4,6,7,8};
    int n=arr2.size();
    
    vector<int> arr;
    
    int i=0,j=0;
    
    while(i<m&& j<n){
        if(arr1[i]>=arr2[j]){
            arr.push_back(arr2[j]);
            j++;
        }
        else{
            arr.push_back(arr1[i]);
            i++;
        }
    }
    while(i<m){
        arr.push_back(arr1[i]);
            i++;
    }
    while(j<n){
        arr.push_back(arr2[j]);
            j++;
    }
       cout<<" sorted arr is "<<endl;
    for(int i:arr){
     cout<<i<<" ";
    }
    cout<<endl;
    double ans=-1;
    
    int total=arr.size();
    if(total%2!=0){
        ans=arr[total/2];
        
    }
    else{
        ans=(double(arr[total/2])+double(arr[total/2-1]))/2;
    }
    cout<< " median is "<<ans<<endl;
}