// https://www.spoj.com/PTIT/problems/BCPALIN/
// BCPALIN - Số đối xứng (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l / 2; i++)
        if (s[i] != s[l - 1 - i])
        {
            cout << "NO\n";
            return;
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