#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    vector <int> arr= {-1, 0, 1, 2, -1, -4};
    int n=arr.size();
    set<vector<int>> uni;
    
for(int i=0;i<n;i++){
    int tar=-arr[i];
    // as sum of 3 no are 0 so tar can acts as third num
    set<int> s; // this will store aach number for checking for every i
    for(int j=i+1;j<n;j++){
    
        int third=tar-arr[j];
        // here nums[j] will acts as second num 
        if(s.find(third)!=s.end()){
            vector<int> trip={arr[i],arr[j],third};
            sort(trip.begin(),trip.end());
            // sort function will maintain the same order of elements 
            
            // so now we can use set to ensures that same vector not appear multiple tiems
            uni.insert(trip);
            
        }
        else{
            s.insert(arr[j]);
        }
    }
}
vector<vector<int>> ans(uni.begin(),uni.end());
  // Printing result
    for (auto &triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }
}