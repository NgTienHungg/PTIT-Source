// https://www.spoj.com/PTIT/problems/P17QPROA/
// P17QPROA - QUALIFY ROUND 2017 A - TỔNG HAI SỐ CHÍNH PHƯƠNG

#include <bits/stdc++.h>
using namespace std;

bool ktcp(int n)
{
    int x = sqrt(n);
    if (x * x == n)
        return 1;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int d = 0;
    for (int i = 0; i <= sqrt(n / 2); i++)
    {
        int x = n - i * i;
        if (ktcp(x) == 1)
            d++;
    }
    cout << d << endl;
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