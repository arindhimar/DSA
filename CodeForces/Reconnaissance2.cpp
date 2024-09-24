#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> height;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        height.push_back(temp);
    }

    int minDiff = INT_MAX;

    int i1 = 0, i2 = 0,j,temp;

    for (int i = 0; i < n - 1; i++)
    {
        j=i+1;

        if (height[i] > height[j])
                temp = height[i] - height[j];
            else
            {
                temp = height[j] - height[i];
            }

            // cout<<"====="<<temp<<"=============";

            if (temp < minDiff)
            {
                // cout<<"asdhkasjhdashjdkhash";

                minDiff = temp;
                i1 = i + 1;
                i2 = j + 1;
            }

        // for (int j = i + 1; j < n; j++)
        // {
        //     int temp = 0;
            
        // }
    }
    if(height[n-1]>height[0]){
    temp = height[n-1]-height[0];
    }
    else{
    temp = height[0]-height[n-1];

    }

if (temp < minDiff)
            {
                // cout<<"asdhkasjhdashjdkhash";

                minDiff = temp;
                i1 =  1;
                i2 = n;
            }

    cout << i1 << " " << i2;
    return 0;
}