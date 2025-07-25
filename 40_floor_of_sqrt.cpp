#include<iostream>
using namespace std;
int main(){
    int num=45;
    int st=0;
    int end=num;
    int ans=1;
    if(num==0){
        ans=0;
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid*mid<=num){
            ans=mid;
            st=mid+1;
            
        }
        else{
            end=mid-1;
        }
    }
    cout<<"the floor root of num is "<<ans<<endl;
}