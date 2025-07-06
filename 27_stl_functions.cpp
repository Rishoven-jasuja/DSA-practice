#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<deque>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>

#include<algorithm>
 using namespace std;
// int main(){
//     vector <int> vec={1,2,3,4,5,6};
//     vec.emplace_back(7); // this is also an function to add element like push back
//     cout<<vec[6]<<endl;
//     cout<<vec.size()<<endl;
//     for(int i:vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     vec.erase(vec.begin() +3); // this function is used to remove the particular elements from any vector  
//     cout<<vec.size()<<endl;
//     for(int i:vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     // vec.erase(vec.begin()+1,vec.end()-1);
//     // // this will erase the elements in that range
//     // for(int i:vec){
//     //     cout<<i<<" ";
//     // }
    
//     vec.insert(vec.begin()+2,44);
//     //this will add the 44 elemnt to the 2nd index (3rd position)
//     for(int i:vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     // vec.clear(); // this function is used to empty the vector
//     //  cout<<vec.size();
    
//      vector<int>::iterator it;
//      for(it=vec.begin();it!=vec.end();it++){
//          cout<<*it<<" ";
//      }
    

//      cout<<endl;
//      // this is the way to iterate through the vector using iterator

//      for(auto it=vec.rbegin(); it!=vec.rend(); it++){
//          cout<<*it<<" ";
//      }
//      // this is the way to iterate through the vector in reverse order using reverse iterator
//     }

// int main(){
//     // list is a doubly linked list in c++
//     // it is used to store the elements in a linear fashion
//     // it is similar to vector but it is more efficient in terms of insertion and deletion
//     // it is not efficient in terms of random access
//     list<int> l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_back(3);
//     l.push_front(4);
//     l.push_front(5);
//     for(int i:l){
//         cout<<i<<" ";

//     }
//     cout<<endl;
//     l.pop_back(); // this will remove the last element from the list
//     l.pop_front(); // this will remove the first element from the list
    
//     for(int i:l){
//         cout<<i<<" ";

//     }

//     return 0;

// }

    // in this we learn about deque
    // deque is a double ended queue
    // it is similar to vector but it is more efficient in terms of insertion and deletion
    // it is not efficient in terms of random access
// int main(){
//     // now we will learn about pair
//     // pair is a data structure that can hold two values of different types
//     pair<int, int> p={1, 2};
//     cout << "First: " << p.first << ", Second: " << p.second << endl;
//     // we can also use make_pair to create a pair
//     // make_pair is a function that creates a pair of two values
//     // it is useful when we want to create a pair without specifying the types
//     // it automatically deduces the types of the values
    
//     auto t= make_pair(10, 'A');
//     cout << "First: " << t.first << ", Second: " << t.second << endl;

//     pair<int,pair<int, int>> nestedPair = make_pair(1, make_pair(2, 3));
//     cout << "Nested Pair: " << nestedPair.first << ", "
//          << nestedPair.second.first << ", " 
//          << nestedPair.second.second << endl;   

//     // we can also use pair to create a pair of two pairs
//     vector<pair<int, int>> vecPairs={{1, 2}, {3, 4}, {5, 6}};
//     cout << "Vector of Pairs: " << endl;
//     // Using auto (clean and safe)
// for (auto i : vecPairs) {
//     cout << "(" << i.first << ", " << i.second << ") ";
// }
// vecPairs.push_back({7, 8});
// vecPairs.emplace_back(9, 10); // emplace_back is used to add elements to the vector
// for (auto i : vecPairs) {
//     cout << "(" << i.first << ", " << i.second << ") ";
// }
// // difference between push_back and emplace_back is that emplace_back constructs the object in place, while push_back copies the object
// // this means that emplace_back is more efficient than push_back


// }
// int main(){
//     // from here we will learn about stack
//     // stack is a data structure that follows the Last In First Out (LIFO) principle
//     // it is similar to a stack of books where the last plate added is the first one to be removed
//     stack<int> s;
//     s.push(1); 
//     s.push(2);
//     s.push(3);
 
//     cout << "Top element: " << s.top() << endl; // this will return the first elemnent from top or up but it is entered at last
//     s.pop(); // this will remove the top element from the stack
//     cout << "Top element after pop: " << s.top() << endl; 
//     s.push(4); // this will add the 4 to the top of the stack
    
//     // while(!s.empty()){
//     //     cout << s.top() << " "; // this will print the top element of the stack
//     //     s.pop(); 
//     //     // this will remove the top element from the stack
//     // }
//     stack<int> s1;
//     s1.swap(s);
//     cout<< "  s size: " << s.size() << endl; // this will return the size of the stack
//     cout<< "  s1 size: " << s1.size() << endl; // this will return the size of the stack s1
//     // stack is a data structure that follows the Last In First Out (LIFO) principle
// }
// int main(){
//     // in this we will learn about queue 
//     // queue is a data structure that follows the First In First Out (FIFO) principle
//     // it is similar to a queue of people waiting in line where the first person in line    
//     // is the first one to be served



//     queue<int> q;
//         q.push(1);
//     q.push(2);
//     q.push(3);
    
//     cout << "Front element: " << q.front() << endl; // this will return the first element from the queue
//     cout << "Back element: " << q.back() << endl; // this will return the last element from the queue
    
//     q.pop(); // this will remove the front element from the queue
//     cout << "Front element after pop: " << q.front() << endl; 
    
//     while(!q.empty()){
//         cout << q.front() << " "; // this will print the front element of the queue
//         q.pop(); 
//         // this will remove the front element from the queue
//     }
    
//     return 0;
// }

// int main(){
//     // here we will learn about maps 
//     // map is a data structure that stores key-value pairs
//     // it is similar to a dictionary where each key is unique and maps to a value
//     map<string, int> m;
//     m["tv"]=29;
//     m["fridge"]=30;
//     m["ac"]=40;
//     m["washing machine"]=50;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl; // this will print the key and value of the map
//     }
//      // map store data in sorted order based on the key lexicographically

//     m.insert({"oven", 60}); // this will insert a new key-value pair into the map
//     m["microwave"]=70; // this will insert a new key-value pair into the map

//     cout << "After insertion:" << endl;
//     for(auto i:m){
//         cout<<" items "<<i.first<< " and there qunatity is "<<i.second<<endl; // this will print the key and value of the map
//     }

//     cout<< "count of tv is "<<m.count("tv")<<endl; // this will return the count of the key in the map
//     cout<< " the quantity of washing machine is "<< m["washing machine"]<<endl; // this will return the value of the key in the map
//     m.erase("ac"); // this will remove the key-value pair from the map
//     cout << "After erasing ac:" << endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl; // this will print the key and value of the map
//     }


//     if(m.find("tv")!=m.end()){ // this will check if the key is present in the map
//         cout<<"tv is present in the map"<<endl;}
//         else{
//             cout<<"tv is not present in the map"<<endl;
//         }
        
//     if(m.find("laptop")!=m.end()){ // this will check if the key is present in the map
//         cout<<"laptop is present in the map"<<endl;}
//         else{
//             cout<<"laptop is not present in the map"<<endl;
//         }

//         // there is also multimap in c++ which is similar to map but it allows duplicate keys
//          multimap<string, int> mm;
//     mm.insert({"apple", 1});
//     mm.insert({"banana", 2});       
//     mm.insert({"apple", 3}); // this will insert a new key-value pair into the multimap with duplicate key
//     mm.insert({"orange", 4});   
//     cout << "Multimap contents:" << endl;
//     for(auto i:mm){
//         cout << i.first << " " << i.second << endl; // this will print the key and value of the multimap
//     }
//     // multimap allows duplicate keys, so we can have multiple values for the same key
//     // we can also use find function to find the key in the multimap

//     // here unordered map is also used which is similar to map but it does not store data in sorted order
//     unordered_map<string, int> um;
//     um["apple"] = 1;    

//     um["banana"] = 2;
//     um["orange"] = 3;    
//     um["grape"] = 4;
//     cout << "Unordered Map contents:" << endl;
//     for(auto i:um){
//         cout << i.first << " " << i.second << endl; // this will print the key and value of the unordered map
//     }
//     // unordered map does not store data in sorted order, it uses hash table to store data
//     // it is more efficient than map in terms of time complexity for insertion, deletion and search
// }
// int main(){
//     // here we will learn about sets 
//     // set is a data structure that stores unique elements in sorted order

//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//        s.insert(5);
//       s.insert(3); // this will not insert 3 again as set does not allow duplicate elements
//     for(auto i:s){
//         cout<<i<<" "; // this will print the elements of the set
//     }
//     cout<<endl;
//     cout<<*(s.lower_bound(3))<<endl; // this will return the first element that is greater than or equal to 3
//     cout<<*(s.upper_bound(4))<<endl; // this will return the first element that is greater than 4
//        cout<<*(s.lower_bound(8))<<endl; // this will return the first element that is greater than or equal to 3

//      // unordered set is also used which is similar to set but it does not store data in sorted order
//     unordered_set<int> us;  
//     us.insert(1);
//     us.insert(2);   
//     us.insert(3);
//     us.insert(4);
//     us.insert(5);
//     us.insert(5); // this will not insert 5 again as unordered set does not allow duplicate elements
//     for(auto i:us){
//         cout<<i<<" "; // this will print the elements of the unordered set
//     }
// }

int main(){
    // here we will learn about various algoithms provided by the STL

    // sort function is used to sort the elements of a container in ascending order
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n); // this will sort the array in ascending order
    cout << "Sorted array: ";   
    for(int i=0; i<n; i++){
        cout << arr[i] << " "; // this will print the sorted array
    }
    cout << endl;

    // for vector sorting 

    vector<int> vec = {5, 2, 8, 1, 3};
    sort(vec.begin(),vec.end()); // this will sort the vector in ascending order
    cout << "Sorted vector: ";
    for(auto i:vec){
        cout << i << " "; // this will print the sorted vector
    }

    sort(arr, arr+n, greater<int>()); // this will sort the array in descending order
    cout << "\nSorted array in descending order: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " "; // this will print the sorted array in descending order
    }
}