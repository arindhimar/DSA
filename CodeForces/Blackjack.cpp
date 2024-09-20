#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int diff = n - 10; 

    if(diff >= 1 && diff <= 11) {
        if(diff == 10) cout << 15;
        else if(diff == 1 || diff == 11) cout << 4; 
        else cout << 4; 
    } else {
        cout << 0; 
    }

    return 0;
}