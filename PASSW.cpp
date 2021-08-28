// https://luyencode.net/problem/PASSW
// PASSW - Mật khẩu an toàn

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int st = 0, nd = 0, rd = 0; // Kiểm tra loại kí tự
    for (auto x : s)
    {
        if (x >= 'a' && x <= 'z')
            st = 1;
        else if (x >= 'A' && x <= 'Z')
            nd = 1;
        else if (x >= '0' && x <= '9')
            rd = 1;
    }
    int r = min(5, max((int)s.length() - 5, 0));
    if (st + nd + rd == 3)
        r += 5;
    else
        r += st + nd + rd;
    cout << r << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}