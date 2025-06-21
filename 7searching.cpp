#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    int idx=-1;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
             idx=i;
        }
       
    }
    
    
if(idx!=-1){
    cout<<"the element :"<<key<<" is founded in the arr at the index :"<<idx<<endl;
}
else{
    cout<<"the elements is not present in the arr";
}
return idx;
}
int main(){
    int arr[]={2,3,4,5,56,0,7,54};
    long int key=0;
    search(arr,8,key);
}