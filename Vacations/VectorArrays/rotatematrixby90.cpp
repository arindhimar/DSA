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

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    displayMatrix(matrix);

    cout<<"90 wala"<<endl;

    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            cout<<matrix[j][i];
        }
        cout<<endl;

    }



    return 0;
}
