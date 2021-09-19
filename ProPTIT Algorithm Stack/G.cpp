// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/G
// G. [ProPTIT-Algorithm-Stack] Biểu thức đúng dài nhất.

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto x : s) {
        if (x == '(') st.push(x);
        else {
            if (!st.empty() && st.top() == '(') st.pop();
            else st.push(x);
        }
    }
    cout << s.length() - st.size();
    return 0;
}