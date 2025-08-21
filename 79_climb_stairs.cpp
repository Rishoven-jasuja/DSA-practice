#include<iostream>
using namespace std;
int climbstairs(int n){
    if(n==0||n==1){
        return 1;
    }
    
    return climbstairs(n-1)+climbstairs(n-2);
}
int main(){
    int n=4;
    int ans=climbstairs(n);
    cout<<ans<<endl;
}