#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> robberies;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == '*') {
                robberies.push_back({i, j}); 
            }
        }
    }

    
    int x1 = robberies[0].first, y1 = robberies[0].second;
    int x2 = robberies[1].first, y2 = robberies[1].second;
    int x3 = robberies[2].first, y3 = robberies[2].second;

    int x4 = (x1 == x2)? x3 : (x1 == x3)? x2 : x1;
    int y4 = (y1 == y2)? y3 : (y1 == y3)? y2 : y1;

    cout << x4 + 1 << " " << y4 + 1 << endl; 

    return 0;
}