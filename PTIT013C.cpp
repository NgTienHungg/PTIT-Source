// https://www.spoj.com/PTIT/problems/PTIT013C/
// PTIT013C - BÀI C - Khoảng cách

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b * d) > 0)
        b = -b; // Nếu 2 điểm A, B nằm về cùng 1 phía so với Ox, lấy A' đối xứng với A
    cout << (long long)sqrt((a - c) * (a - c) + (b - d) * (b - d)) << endl;
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