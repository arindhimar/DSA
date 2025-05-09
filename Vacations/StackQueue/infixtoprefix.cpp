#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string invertBrackets(const string& s) {
    string inverted;
    for (char ch : s) {
        if (ch == '(') inverted += ')';
        else if (ch == ')') inverted += '(';
        else inverted += ch;
    }
    return inverted;
}

int main() {
    string s;
    cin >> s;

    stack<char> st;
    string ans;

    s = invertBrackets(s);
    reverse(s.begin(), s.end());

    int n = s.size();

    for (int i = 0; i < n; i++) {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            ans += ch;
        } else if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();
            }
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << "\n";

    return 0;
}
