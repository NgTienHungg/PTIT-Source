// https://www.spoj.com/PTIT/problems/P136SUMD/
// P136SUMD - SUM6 D - Mua kẹo

#include <bits/stdc++.h>
using namespace std;

int Pow(int q, int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= q;
    }
    return res;
}

int main()
{
    int C, K;
    cin >> C >> K;
    int x = Pow(10, K);
    if ((C % x) >= (x / 2) && K != 0)
        cout << (C / x + 1) * x;
    else
        cout << (C / x) * x;
    return 0;
}