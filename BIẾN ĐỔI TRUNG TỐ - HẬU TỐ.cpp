#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '^') return 4;
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

void TestCase() {
    string s; cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
            while (!st.empty() && priority(st.top()) >= priority(s[i])) {
                cout << st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
            cout << s[i];
    }

    while (!st.empty() && st.top() != '(') {
        cout << st.top();
        st.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}