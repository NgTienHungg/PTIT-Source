// https://www.spoj.com/PTIT/problems/P152PROF/
// P152PROF - ROUND 2F - Min max

#include <bits/stdc++.h>
using namespace std;

string Min(int m, int s)
{
    string res(m, '0');
    res[0] = '1';
    s -= 1;
    for (int i = m - 1; i > 0; i--)
    {
        if (s > 9)
        {
            res[i] = '9';
            s -= 9;
        }
        else
        {
            res[i] = s + '0';
            s = 0;
            break;
        }
    }
    if (s > 0)
        res[0] = s + '1';
    return res;
}

string Max(int m, int s)
{
    string res(m, '0');
    for (int i = 0; i < m; i++)
    {
        if (s > 9)
        {
            res[i] = '9';
            s -= 9;
        }
        else
        {
            res[i] = s + '0';
            break;
        }
    }
    return res;
}

int main()
{
    int m, s;
    cin >> m >> s;
    if (m == 1 && s == 0)
        cout << "0 0";
    else if (m * 9 < s || s == 0)
        cout << "-1 -1";
    else
        cout << Min(m, s) << " " << Max(m, s);
    return 0;
}