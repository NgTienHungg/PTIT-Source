// https://www.spoj.com/PTIT/problems/PTIT016C/
// PTIT016C - ACM PTIT 2016 C - Chẵn lẻ

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    s = "#" + s;
    for (int i = 1; i < s.length(); i++)
    {
        if ((i + int(s[i] - '0')) % 2 != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}