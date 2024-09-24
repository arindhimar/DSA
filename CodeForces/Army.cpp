#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> di;
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        di.push_back(temp);
    }

    int a, b;
    cin >> a >> b;

    int sol = 0;
    for (int i = a; i < b; i++)
    {
        sol += di[i - 1];
    }

    cout << sol;
    return 0;
}