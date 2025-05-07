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

    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += temp[i];

        if (sum > maxSum) {
            maxSum = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Max Subarray Sum: " << maxSum << endl;

    return 0;
}
