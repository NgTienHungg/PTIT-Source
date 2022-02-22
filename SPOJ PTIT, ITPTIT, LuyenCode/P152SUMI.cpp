// https://www.spoj.com/PTIT/problems/P152SUMI/
// P152SUMI - ROUND 2I - Ký tự giống nhau

#include <bits/stdc++.h>
using namespace std;

int a[100005] = {0};

void solveInputString(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
            a[i] = a[i - 1] + 1;
        else
            a[i] = a[i - 1];
    }
}

void solve()
{
    int l, r;
    int count = 0;
    cin >> l >> r;
    cout << a[r-1] - a[l-1] << endl;
}

int main()
{
    string s;
    cin >> s;
    s = "@" + s;
    solveInputString(s);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}