#include<iostream>
#include<vector>
using namespace std;
int main(){
    //we have to find the count of prime numbers exactly less than n
    int n=20;
    vector<bool> isprime(n+1,true);
    int count=0;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            count++;
        }
        for(int j=i*2;j<n;j=j+i){
            isprime[j]=false;
        }
    }
    cout<<" the prime numbers count is "<<count<<endl;
}