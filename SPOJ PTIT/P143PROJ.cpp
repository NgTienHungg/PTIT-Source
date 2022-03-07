// https://www.spoj.com/PTIT/problems/P143PROJ/
// P143PROJ - ROUND 3J - Quảng trường

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    int Max = max(n, m);
    int Min = min(n, m);
    if (a >= Max)
        cout << 1;
    else if (a >= Min && a < Max)
        cout << ceil((double)Max / a);
    else
        cout << (long long)(ceil((double)Max / a)) * (long long)(ceil((double)Min / a));
    return 0;
}