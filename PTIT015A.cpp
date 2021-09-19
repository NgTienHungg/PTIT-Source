// https://www.spoj.com/PTIT/problems/PTIT015A/
// PTIT015A - ACM PTIT 2015 A - Ghép số

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    string s = a + b + c;
    sort(s.rbegin(), s.rend());
    cout << s << endl;
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