#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int i = 0, j = 0;
    int sum = 0;
    int maxLen = 0;

    while (j < n) {
        sum += temp[j];
        while (sum > k && i <= j) {
            sum -= temp[i];
            i++;
        }

        if (sum == k) {
            maxLen = max(maxLen, j - i + 1);
        }

        j++;
    }

    cout << "Length of the longest subarray with sum " << k << " is: " << maxLen << endl;

    return 0;
}
