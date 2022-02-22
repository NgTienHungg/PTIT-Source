// https://www.spoj.com/PTIT/problems/P134SUMB/
// P134SUMB - SUM4 B - Lát sàn

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll G, Y;
    cin >> G >> Y;
    // G = 2 * (a + b) - 4
    // Y = (a - 2) * (b - 2)
    ll n = Y + G;
    for (ll i = 3; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if ((i + n / i) == (G + 4) / 2)
            {
                cout << i << " " << n / i;
                break;
            }
        }
    }
    return 0;
}