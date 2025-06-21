#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec={1,2,3,4,5};// this is the way of initializing a vector with all values provided.
    // cout<<vec[0]<<endl; // This will cause undefined behavior since vec is empty.
//    vector<int> vec(5,0);// this is the way of intializing a vector with same elements with any size.
//    for(int i=0;i<vec.size();i++){
//     cout<<vec[i];

//    }
//     vector <char> vec1={'a','b','c','d','e'}; // this is the way of initializing a vector with all values provided.
//    for(char i:vec1){
//     cout<<i;
//    }

   vector <int>vec2;
   cout<<"the size of vector is "<<vec2.size(); // used to find the size of vector
   vec2.push_back(25); // this is used to add an element at the end of the vector.
   vec2.push_back(30);
   vec2.push_back(40);
   for(int i:vec2){
    cout<<i<<endl;
   }
      cout<<"the size of vector is "<<vec2.size();
   vec2.pop_back();// this is used to remove the last element from the vector.
vec2.pop_back();
   cout<<"the size of vector is "<<vec2.size()<<endl;
   for(int i:vec2){
    cout<<i<<endl;
   }
   vec2.push_back(50);
   vec2.push_back(60);
   cout<<vec2.front()<<endl; // this is used to access the first element of the vector.
   cout<<vec2.back()<<endl; // this is used to access the last element of the vector.
   cout<<vec2.at(0)<<endl; // this is used to access the first element of the vector.
   cout<<vec2.at(1)<<endl; // this is used to access the second element of the vector.  
   cout<<vec2.capacity()<<endl; // this is used to find the capacity of the vector. capacity is the size of the memory allocated to the vector.
   
   vec2.push_back(70); // this is used to add an element at the end of the vector.
  vec2.push_back(80); // this is used to add an element at the end of the vector.
  for(int i:vec2){
    cout<<i<<" "; // this is used to print the elements of the vector.
   }
   cout<<"the size of vector is "<<vec2.size()<<endl; // this is used to find the size of the vector.
   cout<<"the capacity of vec is "<<vec2.capacity()<<endl; // this is used to find the capacity of the vector.
   vec2.push_back(90);

  // this is used to add an element at the end of the vector and returns void.
   cout<<"the size of vector is "<<vec2.size()<<endl; // this is used to find the size of the vector after adding an element.
   cout<<"the capacity of vec is "<<vec2.capacity()<<endl; // this is used to find the capacity of the vector after adding an element.
   return 0;
}

// static vs dynamic allocation:
// Static allocation: The size of the vector is fixed at compile time. if we talk about the
//array it has fixed memory which is allocated at compile time. and cannot be changed at runtime.
// Dynamic allocation: The size of the vector can be changed at runtime. if we talk about the
//vector it has dynamic memory which is allocated at runtime. and can be changed at runtime. using push back or pop back function