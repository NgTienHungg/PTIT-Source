// https://www.spoj.com/PTIT/problems/P174SUMD/
// P174SUMD - ROUND 4D - Năm 2017

#include <bits/stdc++.h>
using namespace std;

int day(int x)
{
    if (x == 2)
        return 28;
    if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
        return 31;
    return 30;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int d = day(x);
    int w = 0;

    if (y != 1)
    {
        d -= (8 - y);
        w += 1;
    }

    w += ceil((double)d / 7);
    cout << w;
    return 0;
}