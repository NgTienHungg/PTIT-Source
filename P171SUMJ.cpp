// https://www.spoj.com/PTIT/problems/P171SUMJ/
// P171SUMJ - ROUND 1J - Phương trình

#include <bits/stdc++.h>
using namespace std;
typedef double db;

int main()
{
    db a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << -1;
            else
                cout << 0;
        }
        else
            printf("1\n%.5lf", (db)-c / b);
        return 0;
    }

    db denta = b * b - 4 * a * c;
    if (denta < 0)
        cout << 0;
    else if (denta == 0)
        printf("1\n%.5lf", (db)-b / (2 * a));
    else
    {
        double x1 = (-b - sqrt(denta)) / (2 * a);
        double x2 = (-b + sqrt(denta)) / (2 * a);
        printf("2\n%.5lf\n%.5lf", min(x1, x2), max(x1, x2));
    }
    return 0;
}