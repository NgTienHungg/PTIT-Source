// https://www.spoj.com/PTIT/problems/P131SUMH/
// P131SUMH - SUM1 H - KANGUROO

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d1 = b - a;
    int d2 = c - b;
    int d = max(d1, d2);
    cout << d - 1;
    return 0;
}