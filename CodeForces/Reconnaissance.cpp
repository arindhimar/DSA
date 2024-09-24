#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;

    vector<int> height;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        height.push_back(temp);
    }

    int count =0;

    sort(height.begin(),height.end());

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n && height[j] - height[i] <= d)
        {
            j++;
        }
        count += (j - i - 1);
    }

    count *= 2; 

    cout << count << endl;

    return 0;
}