#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

// int main(){
//     int num=9888946;
//     vector<int>digits;
//     while(num%10!=0 || num!=0){
//         digits.push_back(num%10);
//         num=num/10;
//     }
//     for(int i:digits){
// cout<<i<<" ";
// }
// cout<<" the number of digits of num is: "<<digits.size()<<endl;

// cout<<"the actual number is : ";
// reverse(digits.begin(), digits.end());
// for(int i:digits){
//     cout<<i<<" ";
// }
// }

int main(){
    int num=153;
    int original_num = num; // Store the original number for comparison later
    vector<int>digits;
    int sum=0;
    while(num!=0){
        digits.push_back(num%10);
        num=num/10;
    }
    int i=0;
    while(i<digits.size()){
        sum=sum+round(pow(digits[i],digits.size()));
        i++;
}
if(sum==original_num){
    cout<<"the numbers is an Armstrong number "<<endl;
}
else{
    cout<<"the number is not an Armstrong number "<<endl;
}
}