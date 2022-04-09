// https://code.ptit.edu.vn/student/question/DSA07007
// SO SÁNH BIỂU THỨC

#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (st.top() != 0 && s[st.top() - 1] == '-') {
                for (int j = st.top(); j < i; ++j) {
                    if (s[j] == '+')
                        s[j] = '-';
                    else if (s[j] == '-')
                        s[j] = '+';
                }
            }
            st.pop();
        }
    }
    string res = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '(' && s[i] != ')') {
            res += s[i];
        }
    }
    return res;
}

void testCase() {
    string s, t;
    cin >> s >> t;
    cout << (solve(s) == solve(t) ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}