#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;

    multiset<char> m;

    
    for (char c : s1) m.insert(c);
    for (char c : s2) m.insert(c);

    
    for (char c : s3) {
        auto it = m.find(c);
        if (it == m.end()) {
            cout << "NO" << endl;
            return 0;
        }
        m.erase(it);
    }

    
    if (m.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}