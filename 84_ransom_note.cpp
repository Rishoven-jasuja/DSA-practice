#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomnote, string magazine) {
    unordered_map<char,int> m;
    if(ransomnote.size() > magazine.size()){
        return false;
    }
    int n = magazine.size();
    int k = ransomnote.size();
    for(int i = 0; i < n; i++){
        m[magazine[i]]++;
    }
    for(int i = 0; i < k; i++){
        if(m[ransomnote[i]] != 0){
            m[ransomnote[i]]--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    string ransomnote = "aab";
    string magazine = "baa";

    if(canConstruct(ransomnote, magazine)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}
