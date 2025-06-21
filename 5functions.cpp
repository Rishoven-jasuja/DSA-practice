#include<iostream>
using namespace std;
// char printhello(char name[20]){
//     cout<<"hello "<<name<<endl;
// }
// int main(){
//     char name[20];
//     cout<<"Enter your name: ";
//     cin>>name;
//     printhello(name);
   
int swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"Inside swap function: a = "<<a<<", b = "<<b<<endl;
    return a,b; 


}

int sum(int a,int b){
    return a+b;}
int min(int a,int b){
    if (a<b){
        return a;
    } else {
        return b;
    }
}
int sumofn(int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;

}
int factorial(int n){
    if(n==0||n==1){
        return 1;

    }
    else{
        int prod=1;
        for(int i=2; i<=n;i++){
            prod=prod*i;
        }
        return prod;
    }
}
int main() {
//     int a,b;
//     cout<<"enter a and b:";
//     cin>>a>>b;
//     cout<<"Before swap: a = "<<a<<", b = "<<b<<endl;
//     swap(a, b);
//     cout<<"After swap: a = "<<a<<", b = "<<b<<endl;
//   int add=sum(a,b);
//   cout<<"the sum of a and b is "<<add<<endl;
//   cout<<"the minimum of two numbers is "<<min(a,b)<<endl;

  int n;
  cout<<"enter n for sum printing: ";
  cin>>n;
  cout<<"the sum of first"<<n<< "numbers is "<<sumofn(n)<<endl;
  cout<<"the factorial of "<<n<<"is :"<<factorial(n)<<endl;  
  return 0;
}