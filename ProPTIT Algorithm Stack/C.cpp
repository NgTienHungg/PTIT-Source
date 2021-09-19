// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/C
// C. [ProPTIT-Algorithm-Stack] Biểu thức hậu tố - tiền tố.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<string> st;
    for (auto x : s) {
        if (isalpha(x))
            st.push(string(1, x));
        else {
            string b = st.top();
            st.pop();
            string a = st.top();
            st.pop();
            st.push(x + a + b);
        }
    }
    cout << st.top();
    return 0;
}