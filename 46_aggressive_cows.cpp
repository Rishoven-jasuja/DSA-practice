#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> arr={7,3,2,4,1};
sort(arr.begin(),arr.end());
int n=arr.size();
int cows=3;
// we have to tie 3 cowa im such a way that there minimun distance is maximum possible.

int ans=-1;
int st=1; // because at least there will be a distance of one
int end=*max_element(arr.begin(),arr.end())-1;
// here we considerd the worst   case that if there are two cows and they are placed one at lowest highest

while(st<=end){
    int mid=st+(end-st)/2;
    int cow=1;
    int last=arr[0];
    // here we have assumed tha first cow is tied to the very first stall
    for(int i=1;i<n;i++){
        if(arr[i]-last>=mid){
            cow++;
            last=arr[i];
            // if the differece of last and next cow is greater then mid then we can place the next cow here
        }
        
    }
    if(cow>=cows){
        ans=mid;
        st=mid+1;
    }
    else{
    end=mid-1;}
}
cout<<" the maximum min dist bw two cows is : "<<ans<<endl;
}