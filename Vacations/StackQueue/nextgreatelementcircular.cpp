#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> temp(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    stack<int> st;
    vector<int> nge(n, -1); // Initialize with -1

    for (int i = 0; i < 2 * n; i++) {
        while (!st.empty() && temp[st.top()] < temp[i % n]) {
            nge[st.top()] = temp[i % n]; 
            st.pop();
        }
        if (i < n) {
            st.push(i);
        }
    }

    cout << "NGE Array: ";
    for (int i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}
