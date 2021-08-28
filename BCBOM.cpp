// https://www.spoj.com/PTIT/problems/BCBOM/
// BCBOM - Trò chơi dò mìn

#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>> &v, int i, int j)
{
    int count = 0;
    if (v[i - 1][j] == '*')
        count++;
    if (v[i + 1][j] == '*')
        count++;
    if (v[i - 1][j - 1] == '*')
        count++;
    if (v[i - 1][j + 1] == '*')
        count++;
    if (v[i][j - 1] == '*')
        count++;
    if (v[i][j + 1] == '*')
        count++;
    if (v[i + 1][j - 1] == '*')
        count++;
    if (v[i + 1][j + 1] == '*')
        count++;
    v[i][j] = count + '0';
}

int main()
{
    while (1)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        vector<vector<char>> v(n + 2, vector<char>(m + 2, '.'));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> v[i][j];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (v[i][j] != '*')
                    solve(v, i, j);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cout << v[i][j];
            cout << endl;
        }
    }
    return 0;
}