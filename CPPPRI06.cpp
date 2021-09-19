// https://www.spoj.com/PTIT/problems/CPPPRI06/
// CPPPRI06 - PRIME 6

#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
        if (ktnt(i))
            if (ktnt(n - i))
            {
                cout << i << " " << n - i << endl;
                break;
            }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}