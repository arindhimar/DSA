#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int amazingPerformances = 0;
    int minScore = scores[0];
    int maxScore = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
            amazingPerformances++;
        } else if (scores[i] > maxScore) {
            maxScore = scores[i];
            amazingPerformances++;
        }
    }

    cout << amazingPerformances << endl;

    return 0;
}