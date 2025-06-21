// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[]={-1,0,3,4,5,9,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int target;
//     int left=0;
//     int right=n-1;
//    cout<<"Enter the element to be searched: ";
//     cin>>target;
//     int idx=-1;
    
//     while(left<=right){
//          int mid=left+(right-left)/2;
//         if(arr[mid]==target){
           
//             idx=mid;
//             break;
//         }
    
//     else if(arr[mid]>target){
//             right=mid-1;
        
//     }
//     else{
//         left=mid+1;
//     }
//     }
//     if(idx==-1){
//         cout<<"the element is not present in the arrray";
//     }
//     else{
//      cout<<"the element is founded at index : "<<idx<<endl;
//     }
// return 0;
    
// }

// this is recursive method of binary search
#include<iostream>
using namespace std;

int bs(int arr[], int target, int left, int right) {
    if (left > right) return -1; // Base case: element not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    else if (target > arr[mid]) return bs(arr, target, mid + 1, right);
    else return bs(arr, target, left, mid - 1);
}

int main() {
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = 3;
    int result = bs(arr, target, 0, 6); // Corrected length
    if (result != -1) cout << "Element found at index: " << result << endl;
    else cout << "Element not found" << endl;
    return 0;
}