#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        v.push_back(val);
    }
    int max_idx = 0;
    int min_idx = 0;

    // Find the maximum and minimum height soldiers
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[max_idx])
        {
            max_idx = i;
        }
        if (v[i] < v[min_idx])
        {
            min_idx = i;
        }
    }

    int swaps = 0;

    // Move the maximum height soldier to the front
    if (max_idx > 0)
    {
        swap(v[max_idx], v[0]);
        swaps++;
    }

    // Move the minimum height soldier to the end
    if (min_idx < n - 1)
    {
        swap(v[min_idx], v[n - 1]);
        swaps++;
    }

    cout << swaps;
    return 0;
}