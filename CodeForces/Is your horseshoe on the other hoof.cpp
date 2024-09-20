#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int c=0;
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        if(s.find(n) == s.end()){
            s.insert(n);
        } else {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}