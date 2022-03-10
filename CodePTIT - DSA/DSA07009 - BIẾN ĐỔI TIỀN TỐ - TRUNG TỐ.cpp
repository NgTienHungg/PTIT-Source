// https://code.ptit.edu.vn/student/question/DSA07009
// BIẾN ĐỔI TIỀN TỐ - TRUNG TỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        string tmp = string(1, s[i]);
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = "(" + x + tmp + y + ")";
            st.push(z);
        }
        else
            st.push(tmp);
    }
    cout << st.top();
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