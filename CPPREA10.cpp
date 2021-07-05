// https://www.spoj.com/PTIT/problems/CPPREA10/
// CPPREA10 - Re-arrang Array 10

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<int> st;
    string res = "";
    for (int i = 0; i <= s.length(); i++)
    {
        st.push(i + 1);
        if (i == s.length() || s[i] == 'I')
        {
            while (!st.empty())
            {
                res = res + char(st.top() + '0');
                st.pop();
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}