// https://www.spoj.com/PTIT/problems/P146SUMG/
// P146SUMG - ROUND 6G - Vẽ tranh

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    char arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int k = 1; k <= a; k++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int z = 1; z <= b; z++)
                    cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}