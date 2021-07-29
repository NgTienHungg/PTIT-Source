// https://www.spoj.com/PTIT/problems/P202PROE/
// P202PROE - Dãy ngoặc đúng dài nhất

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int res = 0;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
            st.push(i);
        else
        {
            st.pop();
            if (!st.empty())
                res = max(res, i - st.top());
            else
                st.push(i);
        }
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
