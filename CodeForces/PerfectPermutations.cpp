#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << n - i + 1 << " ";
    }
    cout << endl;

    return 0;
}