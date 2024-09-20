#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, flag = 0;
    cin >> n >> m;

    
    if (n < m) {
        for (int i = n + 1; i < m; i++) {
            
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                cout << "NO" << endl;
                return 0;
            }
            flag = 0;
        }
        
        for (int j = 2; j * j <= m; j++) {
            if (m % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}