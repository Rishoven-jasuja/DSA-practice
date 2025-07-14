#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Rishoven Jasuja";
    int n=str.length();
    int count=0;
    int end=n-1;
    while(end>=0){
        if(str[end]==' '){
            end--;
            continue;
        }
        else{
            
         while(end>=0&& str[end]!= ' '){
            count++;
            end--;
         
        }
           break;
        }
    }
    cout<<" the count is "<<count<<endl;
}