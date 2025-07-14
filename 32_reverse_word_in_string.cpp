#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="the sky is blue";
    reverse(str.begin(),str.end());
    string ans="";
  
    for(int i=0;i<str.length();i++){
      string word="";
    while(i<str.length()&& str[i]!=' '){
       word=word+str[i];
       i++;
}
reverse(word.begin(),word.end());
if(word.length()!=0){
    ans= ans +" " +word;
    
}
}

//cout<<ans.substr(1); // this method is used to get spacefic part
ans.erase(0,1);
cout<<ans;
}