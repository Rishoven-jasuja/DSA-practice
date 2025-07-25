#include<iostream>
using namespace std;
int main(){
    int num=36;
    int st=0;
    int end=num;
    bool ans=false;
    
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid*mid==num){
           ans=true;
        }
        if(mid*mid<num){
           st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(ans){
        cout<<" true , perfect square of "<<num << " exists";
    }
    else{
        cout<<" false , perfect root dont exist";
    }
}