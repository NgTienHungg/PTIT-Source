// https://www.spoj.com/PTIT/problems/P185PROA/
// P185PROA - ROUND 5A - Số nhỏ nhất

#include <bits/stdc++.h>
using namespace std;

char min(char a, char b)
{
    if (a <= b)
        return a;
    return b;
}

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = min(s[i], ('9' - s[i] + '0'));
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}