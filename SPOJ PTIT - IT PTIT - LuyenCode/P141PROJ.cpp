// https://www.spoj.com/PTIT/problems/P141PROJ/
// P141PROJ - ROUND 1J - Test IQ

#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b, char c, char d)
{
    // Đếm só lượng # trong 2x2 ô liên tiếp, nếu # = . thì return 0, ngược lại return 1
    int black = 0;
    if (a == '#')
        black++;
    if (b == '#')
        black++;
    if (c == '#')
        black++;
    if (d == '#')
        black++;
    if (black == 2)
        return 0;
    return 1;
}

int main()
{
    char a[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];

    bool kt = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (check(a[i][j], a[i + 1][j], a[i][j + 1], a[i + 1][j + 1]) == 1)
            {
                cout << "YES";
                kt = 1;
                break;
            }
        }
        if (kt == 1)
            break;
    }
    if (kt == 0)
        cout << "NO";
    return 0;
}