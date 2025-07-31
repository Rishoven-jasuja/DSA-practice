#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
int main(){
    vector <int> arr={1,2,3,4,5,6,7,8,9,10};
    // these are representing thw wieght of each package;
    int n=arr.size();
    int st=*max_element(arr.begin(),arr.end());
    int end=accumulate(arr.begin(),arr.end(),0);
    int ans=-1;
    int days=5;
    while(st<=end){
        int d=1;
        int cap=0;
        int mid=st+(end-st)/2;
        
        for(int i=0;i<n;i++){
            if(arr[i]+cap>mid){
                d++;
                cap=arr[i];
                
            }
            else{
                cap+=arr[i];
                
            }
        }
        if(d<=days){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    
    }
    cout<< " the no of min weight per day are "<<ans<<endl;
}
