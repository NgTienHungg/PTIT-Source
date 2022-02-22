// https://www.spoj.com/PTIT/problems/P153SUMC/
// P153SUMC - ROUND 3C - Giờ học lý thú.

#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y, int n)
{
    if (n % 6 == 0)
        return x - y;
    if (n % 6 == 1)
        return x;
    if (n % 6 == 2)
        return y;
    if (n % 6 == 3)
        return y - x;
    if (n % 6 == 4)
        return -x;
    if (n % 6 == 5)
        return -y;
}

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    cout << solve(x, y, n);
    return 0;
}

/*
f1 = x
f2 = y
f3 = y - x
f4 = - x
f5 = - y
f6 = x - y
f7 = x
f8 = y
... Lặp lại
*/