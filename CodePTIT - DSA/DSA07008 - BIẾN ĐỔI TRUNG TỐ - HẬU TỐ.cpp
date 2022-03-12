// https://code.ptit.edu.vn/student/question/DSA07008
// BIẾN ĐỔI TRUNG TỐ - HẬU TỐ

#include <bits/stdc++.h>
using namespace std;

int prio(char c) {
    if (c == '^') return 4;
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

void testCase() {
    string s; cin >> s;
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') st.push(s[i]);
        else if (s[i] == ')') {
            while (st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            while (!st.empty() && prio(st.top()) >= prio(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else res += s[i];
    }
    while (!st.empty()) {
        if (st.top() != '(') res += st.top();
        st.pop();
    }
    cout << res;
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

// 2
// (A+(B+C)
// ((A*B)+C)