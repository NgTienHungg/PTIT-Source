// https://code.ptit.edu.vn/student/question/DSA07012
// BIẾN ĐỔI HẬU TỐ - TRUNG TỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<string> st;
    for (int i = 0; i < s.length(); ++i) {
        string x = string(1, s[i]);
        if (x == "+" || x == "-" || x == "*" || x == "/") {
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string c = "(" + a + x + b + ")";
            st.push(c);
        }
        else st.push(x);
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