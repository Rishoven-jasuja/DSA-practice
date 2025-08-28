#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;
//pangram: a sentence containing every letter of the alphabet at least once
bool checkIfPangram(const string &s, string &missing) {
    unordered_set<char> alphas;

    // collect all letters from the string
    for (char c : s) {
        if (isalpha(c)) {
            alphas.insert(tolower(c));
        }
    }

    // check missing letters
    missing = "";
    for (char c = 'a'; c <= 'z'; c++) {
        if (alphas.find(c) == alphas.end()) {
            missing += c;
        }
    }

    return alphas.size() == 26;
}

int main() {
    
    string s = "The quick brown fox jumps over the lazy dog";  

    string missing;
    if (checkIfPangram(s, missing)) {
        cout << "The string IS a pangram " << endl;
    } else {
        cout << "The string is NOT a pangram " << endl;
        cout << "Missing letters: " << missing << endl;
    }

    return 0;
}
