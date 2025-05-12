#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    if (n <= 2) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> prefixge(n);
    vector<int> suffixge(n);

    prefixge[0] = temp[0];
    for (int i = 1; i < n; i++) {
        prefixge[i] = max(prefixge[i - 1], temp[i]);
    }

    suffixge[n - 1] = temp[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffixge[i] = max(suffixge[i + 1], temp[i]);
    }

    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        totalWater += min(prefixge[i], suffixge[i]) - temp[i];
    }

    cout << totalWater << endl;

    return 0;
}

