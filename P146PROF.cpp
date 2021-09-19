// https://www.spoj.com/PTIT/problems/P146PROF/
// P146PROF - ROUND 6F - Tam giác

#include <bits/stdc++.h>
using namespace std;

bool ok1 = 0, ok2 = 0;

void check(int a, int b, int c)
{
    if (a + b > c)
        ok1 = 1;
    if (a + b == c)
        ok2 = 1;
}

int main()
{
    int a[4];
    for (int i = 0; i < 4; ++i)
        cin >> a[i];
    sort(a, a + 4);
    check(a[0], a[1], a[2]);
    check(a[1], a[2], a[3]);
    check(a[0], a[2], a[3]);
    check(a[0], a[1], a[3]);
    if (ok1)
        cout << "TRIANGLE";
    else if (ok2)
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
    return 0;
}