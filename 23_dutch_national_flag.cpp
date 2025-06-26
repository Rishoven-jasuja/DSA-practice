#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={2,0,2,1,1,0,1,2,0,0};
    int count_zero=0;
    int count_one=0;
    int count_two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count_zero++;
        }
        if(arr[i]==1){
            count_one++;
        }
        if(arr[i]==2){
            count_two++;
        }
    }
    // till here we have counted the freq of 0,1,2 , now we waill overwrite the values of indexes
    
    int idx=0;
    int i=0;
    while(i<count_zero){
        arr[idx++]=0;
        i++;
    }
    int j=0;
    while(j<count_one){
        arr[idx++]=1;
        j++;
    }
    int k=0;
 while(k<count_two){
        arr[idx++]=2;
        k++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}