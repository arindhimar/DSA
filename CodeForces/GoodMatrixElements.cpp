#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int mid = (n - 1) / 2;
    int good_elements_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1 || i == mid || j == mid) {
                good_elements_sum += matrix[i][j];
            }
        }
    }

    cout << good_elements_sum << endl;
    return 0;
}