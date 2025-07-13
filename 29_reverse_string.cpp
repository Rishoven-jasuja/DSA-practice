#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
char str[50];
cout<<"enter your string is :";
cin.getline(str,50);
cout<<"the original string is :"<<str<<endl;
int n=strlen(str);
cout<<"the size of string is : "<<n<<endl;
int st=0;
int end=n-1;
while(st<=end){
    swap(str[st],str[end]);
    st++;
    end--;
}
cout<<"the reversed string is : "<<str<<endl;
}