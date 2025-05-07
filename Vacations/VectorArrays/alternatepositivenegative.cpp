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

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++) {
        if (temp[i] > 0) {
            pos.push_back(temp[i]);
        } else {
            neg.push_back(temp[i]);
        }
    }

    vector<int> result;
    int j = 0, k = 0;

    while (j < pos.size() || k < neg.size()) {
        if (j < pos.size()) {
            result.push_back(pos[j++]);
        }
        if (k < neg.size()) {
            result.push_back(neg[k++]);
        }
    }

    display(result);

    return 0;
}
