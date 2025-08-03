#include<iostream>
using namespace std;
int main(){
int num=17;
bool prime=true;
for(int i=2;i*i<num;i++){
    if(num%i==0){
        prime=false;
        break;
    }
}
    if(prime){
        cout<<" yes the num is prime";
        
    }
    else{
        cout<<" no num is not prime";
    }

return 0;}