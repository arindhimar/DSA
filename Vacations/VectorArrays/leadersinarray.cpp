#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &temp) {
    for (int i = 0; i < temp.size(); i++) {
        cout << temp.at(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> temp;
    int ele;
    for (int i = 0; i < n; i++) {
        cin >> ele;
        temp.push_back(ele);
    }

    vector<int> leaders;
    leaders.push_back(temp[n - 1]);
    int max_from_right = temp[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (temp[i] > max_from_right) {
            leaders.push_back(temp[i]);
            max_from_right = temp[i];
        }
    }

    reverse(leaders.begin(), leaders.end());
    display(leaders);

    return 0;
}
