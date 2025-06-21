#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<"address of a is "<<&a<<endl;
    int *ptr=&a;
    cout<<"value of ptr is "<<ptr<<endl; // this is used to get the address
    cout<<"the value stored at ptr is "<<*ptr<<endl;// * it is used to access the value
// pointer to pointer can be stored by
int ** ptr2=&ptr;
cout<<"address of ptr is "<<ptr2<<endl;
cout<<"address of ptr1 is "<<&ptr<<endl;
cout<<"value of ptr 1 is "<<*ptr<<endl;
cout<<"value of ptr 2 is"<<**ptr2<<endl;

}