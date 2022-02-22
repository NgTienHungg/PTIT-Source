// https://www.spoj.com/PTIT/problems/CPPLAN01/
// CPPLAN01 - LARGE NUMBER 1

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
    if (a < b)
        swap(a, b);       // a >= b
    string ans(len, '0'); // ans: answer
    int rmb = 0;          // rmb: remember
    for (int i = len - 1; i >= 0; i--)
    {
        int tg = (a[i] - '0') - (b[i] - '0') - rmb;
        if (tg < 0)
        {
            tg += 10;
            rmb = 1;
        }
        else
            rmb = 0;
        ans[i] = tg + '0';
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}