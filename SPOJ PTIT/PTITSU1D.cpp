// https://www.spoj.com/PTIT/problems/PTITSU1D/
// PTITSU1D - Bài D - PTIT Summer 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    char a[5 * m + 2][5 * n + 2];
    for (int i = 1; i <= 5 * m + 1; i++)
        for (int j = 1; j <= 5 * n + 1; j++)
            cin >> a[i][j];

    int d[5] = {0};
    for (int i = 2; i <= 5 * m + 1; i += 5)
    {
        for (int j = 2; j <= 5 * n + 1; j += 5)
        {
            if (a[i][j] == '.')
                d[0]++;
            else if (a[i][j] == '*' && a[i + 1][j] == '.')
                d[1]++;
            else if (a[i + 1][j] == '*' && a[i + 2][j] == '.')
                d[2]++;
            else if (a[i + 2][j] == '*' && a[i + 3][j] == '.')
                d[3]++;
            else
                d[4]++;
        }
    }

    for (int i = 0; i < 5; i++)
        cout << d[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}