#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_map<char,int> m;

    for(int i = 0; i < jewels.size(); i++) {
        m[jewels[i]]++;
    } 

    int count = 0;
    for(int i = 0; i < stones.size(); i++) {
        if(m.find(stones[i]) != m.end()) {
            count++;
        }
    }
    return count;
}

int main() {
    string jewels, stones;
    cout << "Enter jewels string: ";
    cin >> jewels;
    cout << "Enter stones string: ";
    cin >> stones;

    int result = numJewelsInStones(jewels, stones);
    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}
