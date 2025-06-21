// "#include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if (age < 0) {
//         cout << "Invalid age entered. Please enter a positive value." << endl;
//     }
//     else if (age > 18) {
//         cout << "Your age is " << age << ", so you can vote." << endl;
//     }
//     else if (age == 18) {
//         cout << "You are just on the boundary of voting." << endl;
//     }
//     else {
//         cout << "You are not able to vote." << endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    cout<<"enter your chracter";
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"your entered char "<<ch<<" is  lowercase letter"<<endl;
    }
    else if (ch>= 'A'&&ch<='Z'){
        cout<<"your entered char "<<ch<<"is a upper case letter"<<endl;
    }
    else{
        cout<<"not valid input";
    }
}
