// https://luyencode.net/problem/STMASS
// STMASS - Khối lượng phân tử

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int value(char c)
{
    if (c == 'H')
        return 1;
    if (c == 'C')
        return 12;
    if (c == 'O')
        return 16;
}

void TestCase()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'H' || s[i] == 'C' || s[i] == 'O')
            st.push(value(s[i]));
        else if (s[i] >= '2' && s[i] <= '9')
        {
            int k = s[i] - '0';
            st.top() = k * st.top();
        }
        else if (s[i] == '(')
            st.push(0);
        else if (s[i] == ')')
        {
            int sum = 0;
            while (st.top() != 0)
            {
                sum += st.top();
                st.pop();
            }
            st.top() = sum;
        }
    }
    int res = 0;
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}