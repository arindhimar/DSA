#include <bits/stdc++.h>
using namespace std;

int getNumber(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        getNumber(n - 1) + getNumber(n - 2);
    }
}

int main()
{
    int n;

    cin >> n;

    int result = getNumber(n);

    cout << result << endl;
    return 0;
}