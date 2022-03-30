// https://code.ptit.edu.vn/student/question/DSA07005
// BIỂU THỨC TƯƠNG ĐƯƠNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ')')
            st.push(s[i]);
        else {
            string tmp = "";
            while (st.top() != '(') {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop(); // xóa dấu (
            if (!st.empty() && st.top() == '-') {
                for (char j : tmp) {
                    if (j == '+') j = '-';
                    else if (j == '-') j = '+';
                    st.push(j);
                }
            }
            else {
                for (char j : tmp) {
                    st.push(j);
                }
            }
        }
    }
    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
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