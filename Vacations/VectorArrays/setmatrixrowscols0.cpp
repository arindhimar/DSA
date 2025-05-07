#include <bits/stdc++.h>
using namespace std;

void displayMatrix(const vector<vector<int>> &matrix) {
    for (const auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

void setZeroes(vector<vector<int>> &matrix) {
    int m = matrix.size();
    if (m == 0) return;
    int n = matrix[0].size();

    vector<bool> rows(m, false);
    vector<bool> cols(n, false);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (rows[i]) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        if (cols[j]) {
            for (int i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix);
    displayMatrix(matrix);

    return 0;
}
