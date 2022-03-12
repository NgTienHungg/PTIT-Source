// https://code.ptit.edu.vn/student/question/DSA07016
// BIỂU THỨC TĂNG GIẢM

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i <= s.length(); ++i) {
        st.push(i + 1);
        if (i == s.length() || s[i] == 'I') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
    }
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