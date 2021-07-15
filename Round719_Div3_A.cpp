// https://codeforces.com/contest/1520/problem/A
// A. Do Not Be Distracted!

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.resize(n);
    int d[127] = {0};
    for (int i = 0; i < s.length(); i++)
        d[s[i]]++;
    d[s[0]] -= 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1] && d[s[i - 1]] > 0)
        {
            cout << "NO\n";
            return;
        }
        d[s[i]]--;
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}