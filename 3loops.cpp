// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter your number: ";
//     cin >> n;
    
//      int sum = 0;
//     for (int i = 0; i <= n; i++) {
//         sum=sum+i;
//     }
//      cout<<"the sum of first "<<n<<" numbers is "<<sum<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    cout<<"enter your number";
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n){
        if (i%2!=0){
            sum=sum+i;
        
        }
        i++;
    }
    cout<<"the sum of odd numbers is "<<sum<< endl;
}