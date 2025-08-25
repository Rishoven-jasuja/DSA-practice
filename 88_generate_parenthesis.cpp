#include <bits/stdc++.h>
using namespace std;

// Recursive helper function
void generate(int n, int left, int right, string &temp, vector<string> &ans) {
    if (left + right == 2 * n) {
        ans.push_back(temp); // base case: when string has 2*n length
        return;
    }

    // Add '(' if we still can
    if (left < n) {
        temp.push_back('(');
        generate(n, left + 1, right, temp, ans);
        temp.pop_back(); // backtrack
    }

    // Add ')' if it doesn't exceed '(' count
    if (right < left) {
        temp.push_back(')');
        generate(n, left, right + 1, temp, ans);
        temp.pop_back(); // backtrack
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string temp;
    generate(n, 0, 0, temp, ans);
    return ans;
}

int main() {
    int n;
    cout << "Enter number of pairs of parentheses: ";
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "All valid parentheses combinations are:\n";
    for (auto &s : result) {
        cout << s << endl;
    }

    return 0;
}
