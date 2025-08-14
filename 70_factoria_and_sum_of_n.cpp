#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    int prod=1;
    prod*=n;
    return prod*factorial(n-1);
}

int sum_n_num(int n){
     int sum=0;
     if(n==0){
        return sum;
    }

 sum=sum+n;
 return sum+sum_n_num(n-1);

}
int main(){
int n;
cout<< " enter the no for factorial : ";
cin>>n;
int fact=factorial(n);
cout<< "the factorial " <<fact<<endl;
int sumN=sum_n_num(n);
cout<<" sum of n numbers are "<<sumN;
}