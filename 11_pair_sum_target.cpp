// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=4;
//     int arr[4]={2,7,11,15};
//     int target=13; // Target sum to find the pair
//     vector<int>ans;
//     vector<int>pair;
//     // Brute force approach to find the pair sum equal to target
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 pair.push_back(arr[i]);
//                 pair.push_back(arr[j]);
//             }
//         }
     
//     }
//     if(ans.size()==0){
//         cout<<"no pair found";
//     }
//     else{
//         cout<<"the pair is given by indices: ";
//         for(int i:ans){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         cout<<"target is found by the pair of values: ";
//         for(int i:pair){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// this code will be used to find the pair when vector is sorted
//it is optimal method to find the pair sum equal to target
#include<iostream>
#include<vector>    
using namespace std;

int main() {
    int n = 4;
    vector<int> arr = {2, 7, 11, 15};
    int target = 0; // Target sum to find the pair
    int left = 0;
    int right = n - 1;

    vector<int> ans;
    while (left < right) {
        if (arr[left] + arr[right] < target) {
            left++;
        } else if (arr[left] + arr[right] > target) {
            right--;
        } else {
            ans.push_back(left);
            ans.push_back(right);

            cout << "The pair is given by indices: ";
            for (int index : ans) {
                cout << index << " ";
            }
            cout << "\nThe corresponding values are: " << arr[ans[0]] << " and " << arr[ans[1]] << endl;
            
            return 0;
        }
    }

    if (ans.empty()) {
        cout << "No such pair found" << endl;
    }

    return 0;
}