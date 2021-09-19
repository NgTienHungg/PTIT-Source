// https://www.spoj.com/PTIT/problems/P173PROH/
// P173PROH - ROUND 3H - Natsu và Happy

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                count++;
            if (n / i % 2 == 0)
                count++;
            if (i * i == n && count > 0)
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
    {
        solve();
    }

    return 0;
}