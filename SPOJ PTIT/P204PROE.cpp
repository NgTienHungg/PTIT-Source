// https://www.spoj.com/PTIT/problems/P204PROE/
// P204PROE - Sơn tường

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 'B')
                dem++;
        if (dem > 0)
            break;
    }
    int vt = dem * dem / 2 + 1;
    int d = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 'B')
                d++;
            if (d == vt)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    return 0;
}