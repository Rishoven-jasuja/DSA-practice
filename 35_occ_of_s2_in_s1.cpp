#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="sadbutopsad";
    string s2="op";
    
    // now we have to check that s2 exist in s1 or not 
    int idx=-1;
    if(s1.find(s2)<s1.length()){
        idx=s1.find(s2);
    }
    if(idx==-1){
        cout<< " the string s2 is not found in the s1 ";
        
    }
    else{
        cout<<"the string is found at the index"<<idx<<endl;
    }
}