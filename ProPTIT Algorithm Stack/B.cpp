// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/B
// B. [ProPTIT-Algorithm-Stack] Biểu thức hậu tố.

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int priority(char c)
{
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

int main()
{
    string s;
    cin >> s;
    s = '(' + s + ')';
    stack<char> st;
    for (auto x : s) {
        if (x >= 'A' && x <= 'Z')
            cout << x;
        else if (x == '(')
            st.push(x);
        else if (x == ')') {
            while (st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            st.pop(); // Xóa dấu '('
        }
        else if (x == '+' || x == '-' || x == '*' || x == '/') {
            while (priority(st.top()) >= priority(x)) {
                cout << st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    return 0;
}