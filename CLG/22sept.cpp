#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> tempNumbers;
    string tempNumber;
    string additionEquation;
    cin >> additionEquation;
    for (char ch : additionEquation)
    {
        if (ch != '+')
        {
            tempNumbers.push_back(ch - '0');
        }
    }

    sort(tempNumbers.begin(), tempNumbers.end());

    for (int i = 0; i < tempNumbers.size(); i++)
    {
        cout << tempNumbers[i];
        if (i < tempNumbers.size() - 1)
        {
            cout << "+";
        }
    }

    return 0;
}
