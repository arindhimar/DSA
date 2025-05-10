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
    vector<int> nge(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= temp[i]) {
            st.pop();
        }
        if (!st.empty()) {
            nge[i] = st.top();
        } else {
            nge[i] = -1;
        }
        st.push(temp[i]);
    }

    cout << "NGE Array: ";
    for (int i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}
