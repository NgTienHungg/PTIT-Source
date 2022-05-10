// https://code.ptit.edu.vn/student/question/DSA11001
// CÂY BIỂU THỨC 1

#include <bits/stdc++.h>
using namespace std;

bool isSign(char c) {
    return (c == '+' or c == '-' or c == '*' or c == '/');
}

void TestCase() {
    string s; cin >> s;
    stack<string> st;
    for (char i : s) {
        string z = "";
        if (isSign(i)) {
            string y = st.top(); st.pop();
            string x = st.top(); st.pop();
            z = x + i + y;
        } else {
            z += i;
        }
        st.push(z);
    }
    cout << st.top();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}