#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    
    //below code is for square pattern 
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    
    // for alphabetic pattern
    // for(int i=0;i<=n-1;i++){
    //         char ch='a';

    //     for(char j=ch;j<ch+n;j++){
    //         cout<<j;
            
    //     }
    //     cout<<"\n";
    // }
    
    // for without repeating old numbers
    // int num=1;
    // for(int i =0;i<=n-1;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num;
    //         num++;
    //     }
    //   cout<<endl;
    // }
    
    // for without repeating alphabets
    
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //     cout<<ch;
    //     ch++;
    // }
    // cout<<endl;
    // } 
    
    // for triangle pattern
    
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }
    
    // for numberes triangle
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1;
        
    //     }
    
    //     cout<<endl;
    // }
    
    //for 1
        //   12
        //   123
        //   1234
        
// for(int i=0;i<=n;i++){
//     for(int j=0;j<i;j++){
//         cout<<j+1;
        
//     }

//     cout<<endl;
// } 

// for 1
// 21
// 321
// 4321
//  for(int i=1;i<=n;i++){
//      for (int j=i;j>=1;j--){
//          cout<<j;
//      }
//      cout<<endl;
//  }

// for 1
//1
//23
// 456
// 78910
// int num=1;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<num<<" ";
//         num++;
//     }
// cout<<endl;
// }

//for 1111
//     222
//      33
//       4
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=0;j<i;j++){
//         cout<<" ";

//     }
//     //nums
//     for(int j=0;j<n-i;j++){
//         cout<<(i+1);
//     }
//     cout<<endl;
// }
// for pyramid pattern
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     //nums
//     for(int j=1;j<=i+1;j++){
//         cout<<j;
//     }
//     for(int j=i;j>0;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }

    return 0;
}
