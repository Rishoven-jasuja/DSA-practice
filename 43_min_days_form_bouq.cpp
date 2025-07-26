#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {5, 3, 9, 4, 6, 8, 2, 7};
int m = 3; // no of bouqet 
int k = 2; // no of adjacent flow req to form bouq
int n=arr.size();
int st=*min_element(arr.begin(),arr.end());
int end=*max_element(arr.begin(),arr.end());
int ans=-1;
if(n<m*k){
    return ans;
}

while(st<=end){
    int mid=st+(end-st)/2;
    
    int flower=0;
    int bouq=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]<=mid){
            flower++;
        }
        else{
            flower=0;
        }
        if(flower==k){
            bouq++;
            flower=0;
            continue;
        }
        
    }
    if(bouq>=m){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    
}
cout<< " the min days to form "<< m <<" with adjac. flowers "<<k<< " ans is : "<<ans<<endl;
return 0;
}