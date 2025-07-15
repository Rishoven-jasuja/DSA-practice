#include<iostream>
#include<string>

using namespace std;
int main(){
    char chars[]={'a','a','b','b','c','c','c'};
    int n=sizeof(chars)/sizeof(chars[0]);
    
    int idx=0;
    for(int i=0;i<n;){
        char ch=chars[i];
        int count=0;
        while(i<n&& chars[i]==ch){
            count++;
            i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }
        else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<chars[i]<<" ";
    }
}
