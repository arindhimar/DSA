#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t > 0){
        int n;
        cin >> n;

        vector<int> a;
        for(int i = 0; i < n; i++){
            int val;
            cin >> val;
            a.push_back(val);
        }

        sort(a.begin(), a.end());

        bool possible = true;
        for(int i = 1; i < n; i++){
            if(abs(a[i-1] - a[i]) > 1){
                possible = false;
                break;
            }
        }

        if(possible){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        t--;
    }
    return 0;
}