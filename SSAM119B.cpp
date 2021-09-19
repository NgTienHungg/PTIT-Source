// https://www.spoj.com/PTIT/problems/SSAM119B/
// SSAM119B - GẤP ĐÔI DÃY SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Pow(2, n) chia để trị
ll Pow(ll n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    ll tmp = Pow(n / 2);
    ll res = tmp * tmp;
    if (n & 1)
        return res * 2;
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll l = Pow(n - 1); // Độ dài nửa đoạn đầu
    while (1)
    {
        if (n == 1)
        {
            cout << 1;
            break;
        }
        if (l == k)
        {
            cout << n;
            break;
        }
        if (k > l)
        {
            // Lấy đối xứng k mới qua l
            k = l - (k - l);
        }
        n--;
        l /= 2;
    }
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