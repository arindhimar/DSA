#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        int stonesToTake = gcd(a, n);
        if (stonesToTake > n) {
            cout << 1 << endl;
            break;
        }
        n -= stonesToTake;

        stonesToTake = gcd(b, n);
        if (stonesToTake > n) {
            cout << 0 << endl;
            break;
        }
        n -= stonesToTake;
    }

    return 0;
}
