#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // Convert the string to lowercase
    for (char &c : s) {
        c = tolower(c);
    }

    int len = s.length();

    for (int i = 0; i < len; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            cout << s[i] <<"YES"<< endl;
            return 0;
        }
    }

            cout << s[i] <<"NO"<< endl;

    return 0;
}