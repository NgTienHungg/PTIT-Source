// https://code.ptit.edu.vn/student/question/DSA08017
// SỐ LỘC PHÁT 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    stack<string> st;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        st.push(s);

        if (s.length() == n) continue;
        q.push(s + "6");
        q.push(s + "8");
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
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