#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    
    for (char &c : s) {
        c = tolower(c);
    }

    
    char lastLetter = ' ';
    for (char c : s) {
        if (c != ' ' && c != '?') {
            lastLetter = c;
        }
    }

    
    if (lastLetter == 'a' || lastLetter == 'e' || lastLetter == 'i' || lastLetter == 'o' || lastLetter == 'u' || lastLetter == 'y') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}