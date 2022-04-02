// https://code.ptit.edu.vn/student/question/DSA03020
// BIỂU THỨC ĐÚNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st;
    int res = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '[') {
            st.push(i);
        } else {
            if (!st.empty()) {
                st.pop();
            } else {
                int j = i;
                while (s[j] == ']') j++;
                swap(s[i], s[j]);
                res += j - i;
                st.push(i);
            }
        }
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