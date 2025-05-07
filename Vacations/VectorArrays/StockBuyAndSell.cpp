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
    int maxPrice = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < n; i++) {
        minPrice = min(temp[i], minPrice);
        maxPrice = max(maxPrice, temp[i] - minPrice);
    }
    cout << "Max Profit: " << maxPrice << endl;
    return 0;
}s