#include<iostream>
using namespace std;
int main(){
int st=0;
int arr[]={1,1,2,2,4,4,5,5,7};
int n=sizeof(arr)/sizeof(arr[0]);
int end=n-1;
int idx=-1;
if(n==1){
    idx=0;
    cout<<"the element is found at the index "<<idx<<endl;
    
}
while(st<=end){
int mid=st+(end-st)/2;
if(mid==0&& arr[0]!=arr[1]){
     idx=mid;
     break;
}
if(mid==n-1&& arr[n-1]!=arr[n-2]){
  idx=mid;
  break;
}
if(arr[mid-1]!=arr[mid]&&arr[mid]!=arr[mid+1]){
   idx=mid;
    break;
}
else if(mid%2==0){
    //this means mid is even so left and right part will have equal elements in even no;
   
    if(arr[mid-1]==arr[mid]){
        //that means lest portion will conatin the element because one element get paired with the mid , so the left portion is left with odd elemnts in which one is in paor so the left one is the ans;
        end=mid-1;
    }
    else{
        //if above conditon is wrong that means right part will contain the unpaired element;
        st=mid+1;
    }
}
else{
    // this means that mid is odd so both left and right portion will have odd elements
     if(arr[mid-1]==arr[mid]){
        //that means lest portion will not conatin the element because one element get paired with the mid , so the left portion is left with even elemnts in which so there is no unpaired element;
        
        // so we have to search in right side
         st=mid+1;
     
    }
    else{
        //if above conditon is wrong that means left part will contain the unpaired element;
           end=mid-1;
       
    }
}

}
cout<<"the elements is present at index :"<<idx<<endl;
}