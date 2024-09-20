#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m; 

    int total_chips_given = 0;
    int i = 1;

    while (m >= i) {
        m -= i; 
        total_chips_given += i;
        i = (i % n) + 1;
    }

    cout << m << endl; 

    return 0;
}