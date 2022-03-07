// https://www.spoj.com/PTIT/problems/CCPPRI01/
// CCPPRI01 - PRIME 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        if (n == 1)
            break;
    }
    if (n != 1)
        cout << n << endl;
    else
        cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}