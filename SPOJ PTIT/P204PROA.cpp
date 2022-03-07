// https://www.spoj.com/PTIT/problems/P204PROA/
// P204PROA - abc coins

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    int x = b - c; // Tiền lỗ khi mua 1 lon b
    int d = 0;

    if (a < x)
    {
        d = n / a;
        n %= a;
        while (n > b)
        {
            n -= x;
            d++;
        }
        cout << d;
        return 0;
    }

    while (n >= b)
    {
        d += n / b;
        n = n % b + c * (n / b);
    }
    if (n >= a)
        d += n / a;
    cout << d;
    return 0;
}