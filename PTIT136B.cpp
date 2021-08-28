// https://www.spoj.com/PTIT/problems/PTIT136B/
// PTIT136B - Quân bài

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> v(2 * r + 1, vector<char>(2 * c + 1));
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> v[i][j];

    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            v[i][2 * c + 1 - j] = v[i][j];

    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= 2 * c; j++)
            v[2 * r + 1 - i][j] = v[i][j];

    if (v[a][b] == '#')
        v[a][b] = '.';
    else if (v[a][b] == '.')
        v[a][b] = '#';

    for (int i = 1; i <= 2 * r; i++)
    {
        for (int j = 1; j <= 2 * c; j++)
            cout << v[i][j];
        cout << endl;
    }
    return 0;
}