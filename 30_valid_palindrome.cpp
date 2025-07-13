#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
char str[6]="kanak";
int st=0;
int end=strlen(str)-1;
bool ans=true;
while(st<=end){
    if(str[st]==str[end]){
        st++;
        end--;
        
    }
    else{
        ans=false;
        break;
    }
}
if(ans){
    cout<<"the string is a valid palindrome";
}
else{
    cout<<"the string is not palindrome";
}

}