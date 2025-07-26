#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> piles={5,7,9,8};
    int n=piles.size();
    int st=1;
    int end=*max_element(piles.begin(),piles.end());
    int h=8; // max 8 hours is alloted to eat all the bananas;
    int ans=1;
    // we have to find the no of minimum bananas thst he east and can still complete in 8 hrs;
    while(st<=end){
        int mid=st+(end-st)/2;
        double time=0;
        for(int i=0;i<n;i++){
            time=time+ceil(double(piles[i])/mid);
        }
        if(time<=h){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<< " the ans is "<<ans<<endl;
}