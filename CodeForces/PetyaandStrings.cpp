#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    
    for (char& c : s1) c = tolower(c);
    for (char& c : s2) c = tolower(c);

    int result = s1.compare(s2);
    if (result < 0) cout << -1;
    else if (result > 0) cout << 1;
    else cout << 0; 

    return 0;
}