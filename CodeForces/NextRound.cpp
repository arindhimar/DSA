#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    sort(scores.rbegin(), scores.rend()); 
    int kth_highest_score = scores[k - 1];

    int ct = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_highest_score && scores[i] > 0) {
            ct++; 
        }
    }

    cout << ct << endl;
    return 0;
}