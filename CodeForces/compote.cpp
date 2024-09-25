#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int lemons = min(a, min(b/2, c/4));

    int totalFruits = lemons + 2*lemons + 4*lemons;

    cout << totalFruits;

    return 0;
}