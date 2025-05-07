#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k; // target sum
    cin >> k;
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    unordered_map<int, int> prefixSumCount;
    int count = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += temp[i];

        if (sum == k) {
            count++;
        }

        if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
            count += prefixSumCount[sum - k];
        }

        prefixSumCount[sum]++;
    }

    cout << "Count of subarrays with sum " << k << " is: " << count << endl;

    return 0;
}
