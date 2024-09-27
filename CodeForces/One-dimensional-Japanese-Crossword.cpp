#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> groups;
    int count = 0;

    for (char c : s) {
        if (c == 'B') {
            count++;
        } else if (c == 'W' && count > 0) {
            groups.push_back(count);
            count = 0;
        }
    }

    if (count > 0) {
        groups.push_back(count);
    }

    cout << groups.size() << endl;
    for (int group : groups) {
        cout << group << " ";
    }
    cout << endl;

    return 0;
}