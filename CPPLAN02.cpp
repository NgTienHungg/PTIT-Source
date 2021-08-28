// https://www.spoj.com/PTIT/problems/CPPLAN02/
// CPPLAN02 - LARGE NUMBER 2

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;
    string res(len, '0');
    int remember = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + remember;
        remember = tmp / 10;
        res[i] = tmp % 10 + '0';
    }
    if (remember == 1)
        res = "1" + res;
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}