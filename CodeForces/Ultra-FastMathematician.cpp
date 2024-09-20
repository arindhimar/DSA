#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;  // Read the two binary strings

    string result = "";  // Initialize an empty result string

    // Ensure both strings are of the same length as per problem statement
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }

    

    cout << result << endl;  // Output the resulting binary string

    return 0;
}
