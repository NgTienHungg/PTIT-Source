// https://code.ptit.edu.vn/student/question/DSA07010
// BIẾN ĐỐI TIỀN TỐ - HẬU TỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = x + y + string(1, s[i]);
            st.push(z);
        }
        else st.push(string(1, s[i]));
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