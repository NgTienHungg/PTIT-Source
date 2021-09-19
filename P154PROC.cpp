// https://www.spoj.com/PTIT/problems/P154PROC/
// P154PROC - ROUND 4C - Về quê

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[10][30];
    // Set
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            if (i == 1 || i == 6)
            {
                if (j == 1 || j == 26)
                    a[i][j] = '+';
                else
                    a[i][j] = '-';
            }
            else
            {
                if (j == 1 || j == 26)
                    a[i][j] = '|';
                else if (j % 2 != 0 || (i == 4 && j != 2))
                    a[i][j] = '.';
                else
                    a[i][j] = '#';
            }
        }
    }
    a[2][25] = 'D';
    a[2][24] = a[3][24] = a[5][24] = '|';

    for (int j = 2; j <= 22; j += 2)
    {
        for (int i = 2; i <= 5; i++)
        {
            if (n > 0 && a[i][j] == '#')
            {
                a[i][j] = 'O';
                n--;
            }
            if (n == 0)
                break;
        }
        if (n == 0)
            break;
    }

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            cout << a[i][j];
        }
        if (i == 2 || i == 5)
            cout << ")";
        cout << endl;
    }
}