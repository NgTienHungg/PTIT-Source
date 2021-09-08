// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/A
// A. [ProPTIT-Algorithm-Stack] Hành tinh đảo ngược.

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    string word = "", num = "";
    for (auto x : s) {
        if (x >= '0' && x <= '9') num += x;
        else st.push(x);
    }
    while (!st.empty()) {
        word += st.top();
        st.pop();
    }
    cout << word << endl << num;
    return 0;
}