#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool isLucky = true;
    for (char c : s) {
        if (c!= '4' && c!= '7') {
            isLucky = false;
            break;
        }
    }

    if (!isLucky) {
        cout << "NO" << endl;
        return 0;
    }

    int fsum = 0, rsum = 0;
    for (int i = 0; i < n / 2; i++) {
        fsum += s[i] - '0';
        rsum += s[n - i - 1] - '0';
    }

    if (n % 2!= 0) {
        fsum += s[n / 2] - '0';
    }

    if (fsum == rsum) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}