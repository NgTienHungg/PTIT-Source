// https://www.spoj.com/PTIT/problems/P152PROI/
// P152PROI - ROUND 2I - Chuyển đổi đại lượng góc

#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b)
{
    int x = a % b;
    while (b > 0)
    {
        x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;
    if (n % 360 == 0)
        cout << "0$\n";
    else
    {
        n = n % 360;
        int uoc = UCLN(n, 180);
        if (uoc == 180)
            cout << "$\n";
        else if ((n / uoc) == 1)
            cout << "$/" << 180 / uoc << endl;
        else
            cout << n / uoc << "$/" << 180 / uoc << endl;
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