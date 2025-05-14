#include <bits/stdc++.h>
using namespace std;

int main() {
    string temp;
    cin >> temp;
    int k;
    cin >> k;
    vector<int> itemp;

    for (char s : temp) {
        if (s != ' ') {
            itemp.push_back(s - '0');
        }
    }

    int n = itemp.size();
    if (n <= k) {
        cout << "0";
        return 0;
    }

    int maxi = itemp[0];

    for (int i = 1; i < n;) {
        if (itemp[i] < maxi) {
            itemp.erase(itemp.begin(), itemp.begin() + i);
            n = itemp.size();
            i = 1;
            maxi = itemp[0];
        } else {
            maxi = itemp[i];
            i++;
        }
        if (n == 0) {
            break;
        }
    }

    for (int i : itemp) {
        cout << i;
    }

    return 0;
}

