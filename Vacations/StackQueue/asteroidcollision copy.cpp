#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    vector<int> afterCollision;

    for (int i = 0; i < n; i++) {
        int current = temp[i];

        if (current > 0) {
            afterCollision.push_back(current);
        } else {
            while (!afterCollision.empty() && afterCollision.back() > 0 && afterCollision.back() < abs(current)) {
                afterCollision.pop_back();
            }
            if (!afterCollision.empty() && afterCollision.back() == abs(current)) {
                afterCollision.pop_back();
            } else if (afterCollision.empty() || afterCollision.back() < 0) {
                afterCollision.push_back(current);
            }
        }
    }

    for (int x : afterCollision) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
