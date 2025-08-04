#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int hcf(int a,int b){
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    
       return a;
    
}
int main(){
     int a=15;
     int b=20;
    int gcd=1;
    // if(a==0){
    //     hcf=b;
    // }
    // if(b==0){
    //     hcf=a;
    // }
    // if(a==b){
    //     hcf=a;
    // }
    // for(int i=1;i<=min(a,b);i++){
    //     if(a%i==0&&b%i==0){
    //         hcf=i;
    //     }
    // }
    gcd=hcf(a,b);
    cout<<gcd<<endl;
}