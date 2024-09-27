#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int remainder = k % 10;
    if (remainder <= r) {
        cout << 1 << endl; 
    } else {
        int shovels = (10 - remainder + r - 1) / 10; // Calculate the minimum number of shovels needed
        cout << shovels + 1 << endl; 
    }

    return 0;
}