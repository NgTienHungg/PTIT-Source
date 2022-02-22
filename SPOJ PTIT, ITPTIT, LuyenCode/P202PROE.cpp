// https://www.spoj.com/PTIT/problems/P202PROE/
// P202PROE - Dãy ngoặc đúng dài nhất

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    int count = 0;
    int len = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (!st.empty())
            {
                count++;
                st.pop();
            }
            else
            {
                len = max(len, count);
                count = 0;
            }
        }
    }
    if (len == 0)
        len = count;
    cout << 2 * len << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}