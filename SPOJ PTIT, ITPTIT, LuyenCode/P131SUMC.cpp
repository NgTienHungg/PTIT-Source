// https://www.spoj.com/PTIT/problems/P131SUMC/
// P131SUMC - SUM1 C - Quay bảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<double> v(4);
    v[0] = abs((double)(a / c) - (double)(b / d));
    v[1] = abs((double)(c / d) - (double)(a / b));
    v[2] = abs((double)(d / b) - (double)(c / a));
    v[3] = abs((double)(b / a) - (double)(d / c));

    double MAX = 0;
    for (int i = 0; i < 4; i++)
        MAX = max(v[i], MAX);

    for (int i = 0; i < 4; i++)
        if (v[i] == MAX)
        {
            cout << i;
            break;
        }
    return 0;
}