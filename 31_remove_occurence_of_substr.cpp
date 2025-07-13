#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
string str="daaaabcfkgjfdjabcgjdfgabc";
string part="abc";
while(str.length()>0&& str.find(part)<str.length()){
    str.erase(str.find(part),part.length());
}
cout<<str;

}