// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/I
// I. [ProPTIT-Algorithm-Stack] Gõ bàn phím.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    string s;
    cin >> s;
    
    string res = ""; // Lưu xâu kết quả, res.end() chính là con trỏ
    stack<char> st; // Lưu tạm thời các ký tự sau con trỏ
    for (auto x : s) {
        if (x == '<') {
            if (res.length() > 0) {
                st.push(res.back());
                res.pop_back();
            }
        }
        else if (x == '>') {
            if (!st.empty()) {
                res += st.top();
                st.pop();
            }
        }
        else if (x == '-') {
            if (res.length() > 0)
                res.pop_back();
        }
        else res += x;
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res;
    return 0;
}