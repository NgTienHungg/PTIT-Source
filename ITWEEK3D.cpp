// https://code.itptit.com/problems/100052
// Thu hoạch

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5];
    a[0] = 0;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] + a[i - 1] >= m)
        {
            res += m;
            // Ưu tiên trừ vào số lượng ngày hôm trước
            a[i] += min(0, a[i - 1] - m);
        }
        else
        {
            res += a[i] + a[i - 1];
            a[i] = 0;
        }
    }
    res += min(m, a[n]);
    cout << res;
    return 0;
}