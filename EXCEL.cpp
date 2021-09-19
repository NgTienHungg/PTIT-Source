// https://www.spoj.com/PTIT/problems/EXCEL/
// EXCEL - Bảng tính Excel

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    char a, b;
    ll x, y;
    while (1)
    {
        cin >> a >> x >> b >> y;
        if (x == 0 && y == 0)
            break;
        string ans = "";
        while (y > 0)
        {
            y--;
            ans = char(y % 26 + 'A') + ans;
            y /= 26;
        }
        cout << ans << x << endl;
    }
    return 0;
}