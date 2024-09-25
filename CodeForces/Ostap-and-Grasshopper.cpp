#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int pos_g = -1, pos_t = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') pos_g = i;
        if (s[i] == 'T') pos_t = i;
    }
    if (pos_g > pos_t) swap(pos_g, pos_t);
    for (int i = pos_g; i <= pos_t; i += k) {
        if (s[i] == '#') {
            cout << "NO" << endl;
            return 0;
        }
        if (i == pos_t) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
