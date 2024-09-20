#include<bits/stdc++.h>
using namespace std;

int removeDistinctElements(vector<int>& v) {
    if (v.empty()) {
        return 0; 
    }

    int count = 1;
    int j = 1;
    int ele = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (ele == v[i]) {
            continue;
        } else {
            ele = v[i];
            count++;
            v[j++] = v[i];
        }
    }

    v.resize(count);

    return count;
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Error: Size must be a positive integer." << endl;
        return 1;
    }

    vector<int> v;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int k = removeDistinctElements(v);

    cout << "Updated size: " << k << endl;

    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}