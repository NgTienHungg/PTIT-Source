// https://www.spoj.com/PTIT/problems/P141PROH/
// P141PROH - ROUND 1H - So sánh chuỗi con

#include <bits/stdc++.h>
using namespace std;

void solve(string &s)
{
    string cmd; // cmd = comeinand
    cin >> cmd;
    if (cmd == "-")
    {
        int k;
        cin >> k;
        s.erase(k - 1, 1);
    }
    else
    {
        int l, h, m;
        cin >> l >> h >> m;
        string s1 = s.substr(l - 1, m);
        string s2 = s.substr(h - 1, m);
        if (s1 == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    while (n--)
        solve(s);
    return 0;
}