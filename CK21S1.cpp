// https://code.itptit.com/problems/100033
// Săn học bổng Hảvảd ngày 30/6!

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    int d0 = 0, d1 = 0, d2 = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 3 == 0 && a[i] != 0)
            d0++;
        else if (a[i] % 3 == 1)
            d1++;
        else if (a[i] % 3 == 2)
            d2++;
    }
    int res = d0 + min(d1, d2) + (max(d1, d2) - min(d1, d2)) / 3;
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}