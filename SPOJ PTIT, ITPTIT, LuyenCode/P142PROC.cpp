// https://www.spoj.com/PTIT/problems/P142PROC/
// P142PROC - ROUND 2C - Tập chơi cờ vua

#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int castle()
{
    if (a == c || b == d)
        return 1;
    return 2;
}

int bishop()
{
    if (a - b == c - d)
        return 1;
    if (a + b == c + d)
        return 1;
    if ((a + b) % 2 == (c + d) % 2)
        return 2;
    return 0;
}

int king()
{
    return max(abs(a - c), abs(b - d));
}

int main()
{
    cin >> a >> b >> c >> d;
    cout << castle() << " " << bishop() << " " << king();
    return 0;
}