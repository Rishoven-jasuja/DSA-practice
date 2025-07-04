#include<iostream>
using namespace std;
// Merge two sorted arrays
// Here we are given two sorted arrays a and b , we have to merge them in a
int main(){
    int a[7]={1,4,7,8,0,0,0};
    int m=4;
    int b[3]={3,5,6};
    int n=3;
    int idx=m+n-1; 
    // idx is the index of the last element of the merged array which is a.
    // We will start filling the merged array from the end to avoid overwriting elements in a
    int i=m-1;
    // i is the index of the last element of the first array a
    int j=n-1;
    // j is the index of the last element of the second array b
    // We will compare the elements of a and b from the end and fill the merged array
    while(i>=0&& j>=0){
        if(a[i]>=b[j]){
            a[idx]=a[i];
            idx--;
            i--;
        // If the current element of a is greater than or equal to the current element of b,
        // we place the element from a into the merged array at the current index and move the index and i pointer back.
        // This ensures that we are always placing the larger element at the end of the merged array

        }
        else{
            a[idx]=b[j];
            idx--;
            j--;
        // If the current element of b is greater than the current element of a,
        // we place the element from b into the merged array at the current index and move the index and j pointer back.
        // This ensures that we are always placing the larger element at the end of the merged array
        }
    }
    while(j>=0){
               a[idx]=b[j];
            idx--;
            j--;
    // If there are any remaining elements in b, we place them in the merged array.
    // This is necessary because we might have exhausted all elements in a but still have elements left
    // in b.
    // We continue placing elements from b into the merged array until all elements in b are placed
    }
    
    for(int i=0;i<m+n;i++){
        // Finally, we print the merged array.
        // This will show the merged result of both arrays a and b.
        cout<<a[i]<<" ";
    }
    return 0;
}