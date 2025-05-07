#include <bits/stdc++.h>
using namespace std;

void spiralPrint(const vector<vector<int>> &matrix) {
    int m = matrix.size();
    if (m == 0) return;
    int n = matrix[0].size();

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++) {
            cout << matrix[top][col] << " ";
        }
        top++;

        for (int row = top; row <= bottom; row++) {
            cout << matrix[row][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                cout << matrix[row][left] << " ";
            }
            left++;
        }
    }
    cout << "\n";
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    spiralPrint(matrix);

    return 0;
}
