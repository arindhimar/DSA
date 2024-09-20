#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j <= n - i) {
                    cout << " ";
                } else {
                    cout << j - (n - i);
                }
            }
            for (int j = i - 1; j >= 1; j--) {
                cout << j;
            }
            cout << endl;
        }

        t--;
    }

    return 0;
}