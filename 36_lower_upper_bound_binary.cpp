#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2, 4, 6, 8, 8, 11, 13};
    int target = 8;

    int n = arr.size();
    int lower_bound = n; // First index where arr[i] >= target
    int upper_bound = n; // First index where arr[i] > target

    // Lower Bound
    int st = 0, end = n - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] >= target){
            lower_bound = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    // Upper Bound
    st = 0, end = n - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] > target){
            upper_bound = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    cout << "Lower bound of " << target << " is at index: " << lower_bound << endl;
    cout << "Upper bound of " << target << " is at index: " << upper_bound << endl;
}
