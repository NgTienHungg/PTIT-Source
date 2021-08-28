// https://luyencode.net/problem/FLOWER
// FLOWER - Khăn đỏ và bó hoa tặng bà

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m + 1][n + 1];
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if ((i == 1 && j == 1) || a[i][j] == -1)
                continue;
            if (i == 1)
            {
                if (a[1][j - 1] == -1)
                    a[1][j] = -1;
                else
                    a[1][j] += a[1][j - 1];
            }
            else if (j == 1)
            {
                if (a[i - 1][1] == -1)
                    a[i][1] = -1;
                else
                    a[i][1] += a[i - 1][1];
            }
            else if (a[i - 1][j] == -1 && a[i][j - 1] == -1)
                a[i][j] = -1;
            else
                a[i][j] += max(a[i - 1][j], a[i][j - 1]);
        }
    }
    cout << a[m][n];
    return 0;
}