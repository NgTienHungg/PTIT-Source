// https://www.spoj.com/PTIT/problems/P142PROH/
// P142PROH - ROUND 2H - Đàn kiến

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char a[15][15];
    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            cin >> a[i][j];

    int res = 0;
    bool hang[15] = {0}, cot[15] = {0};

    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            if (a[i][j] == 'S')
            {
                hang[i] = 1;
                cot[j] = 1;
            }

    for (int i = 1; i <= r; ++i)
        if (!hang[i])
            for (int j = 1; j <= c; ++j)
                a[i][j] = '*';

    for (int i = 1; i <= c; ++i)
        if (!cot[i])
            for (int j = 1; j <= r; ++j)
                a[j][i] = '*';

    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            if (a[i][j] == '*')
                res++;
    cout << res;
    return 0;
}