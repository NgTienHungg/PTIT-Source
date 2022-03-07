// https://www.spoj.com/PTIT/problems/PTIT135B/
// PTIT135B - Đèn giao thông

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int d, r, g;
    int res = 0, s = 0; // Quãng đường đã đi được
    for (int i = 1; i <= n; ++i)
    {
        cin >> d >> r >> g;
        res += d - s;
        /* Nếu đang đèn đỏ */
        if (res % (r + g) < r)
            res += r - res % (r + g);
        s = d;
    }
    res += l - s;
    cout << res;
    return 0;
}