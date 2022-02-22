// https://www.spoj.com/PTIT/problems/P145SUMF/
// P145SUMF - ROUND 5F - Trang trí bàn cờ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                char x;
                if ((i + k) % 2 == 0)
                    x = 'X';
                else
                    x = '.';
                for (int l = 1; l <= b; l++)
                {
                    cout << x;
                }
            }
            cout << endl;
        }
    }
    return 0;
}