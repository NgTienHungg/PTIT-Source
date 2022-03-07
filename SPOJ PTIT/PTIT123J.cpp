// https://www.spoj.com/PTIT/problems/PTIT123J/
// PTIT123J - Dấu ngoặc đúng

#include <bits/stdc++.h>
using namespace std;

bool check(char c)
{
    if (c == '[' || c == ']' || c == '(' || c == ')')
        return 1;
    return 0;
}

void solve(string s)
{
    vector<char> res; // Vector lưu trữ các dấu ngoặc
    for (int i = 0; i < s.length(); i++)
        if (check(s[i]))
            res.push_back(s[i]);
    stack<char> st;
    for (int i = 0; i < res.size(); i++)
    {
        // Dạng ()
        if (res[i] == ')')
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
                continue;
            }
        // Dạng []
        if (res[i] == ']')
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
                continue;
            }
        // Nếu k thuộc 2 TH trên thì push() vào stack
        st.push(res[i]);
    }
    if (st.empty())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main()
{
    string s;
    while (1)
    {
        getline(cin, s);
        s.resize(s.length() - 1);
        if (s == "")
            break;
        solve(s);
    }
    return 0;
}