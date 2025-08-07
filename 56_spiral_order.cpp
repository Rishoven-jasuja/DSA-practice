#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int srow = 0;
    int erow = m - 1;
    int scol = 0;
    int ecol = n - 1;

    vector<int> ans;

    while (srow <= erow && scol <= ecol) {
        // Top row
        for (int i = scol; i <= ecol; i++) {
            ans.push_back(matrix[srow][i]);
        }

        // Right column
        for (int i = srow + 1; i <= erow; i++) {
            ans.push_back(matrix[i][ecol]);
        }

        // Bottom row
        if (srow != erow) {
            for (int i = ecol - 1; i >= scol; i--) {
                ans.push_back(matrix[erow][i]);
            }
        }

        // Left column
        if (scol != ecol) {
            for (int i = erow - 1; i > srow; i--) {
                ans.push_back(matrix[i][scol]);
            }
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
