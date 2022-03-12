// https://code.ptit.edu.vn/student/question/DSA07041
// BIỂU THỨC ĐÚNG DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << s.length() - st.size();
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