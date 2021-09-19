// https://www.spoj.com/PTIT/problems/P18QPROA/
// P18QPROA - QUALIFY ROUND 2018 A - CHIA HẾT CHO 2

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                count++;
            if ((n / i) % 2 == 0)
                count++;
            if (i * i == n && i % 2 == 0)
                count--;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}