#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; getline(cin, s);
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(' or s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')') {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        } else if (s[i] == ']') {
            if (!st.empty() && st.top() == '[')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    cout << (st.empty() ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

// 3
// [ graph ] ( binary tree ).
// Dynamic programming )( devide and conquer.
// ([ (([( [ ] ) ( ) (( ))] )) ]).