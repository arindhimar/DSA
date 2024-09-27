#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char start = 'a';
    int rotations = 0;

    for (char c : s) {
        int clockwise = (c - start + 26) % 26;
        int counterclockwise = (26 - (c - start)) % 26;
        rotations += min(clockwise, counterclockwise);
        start = c;
    }

    cout << rotations << endl;

    return 0;
}