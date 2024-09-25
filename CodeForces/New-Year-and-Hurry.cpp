#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int totalTime = 240 - k;
    int count = 0;

    for (int i = 1; i <= n; ) {
        if (i * 5 <= totalTime) {
            count = i;
            i++;
        } else {
            break;
        }
    }

    cout << count;

    return 0;
}