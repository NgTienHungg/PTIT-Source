// https://www.spoj.com/PTIT/problems/P136SUMC/
// P136SUMC - SUM6 C - Số nghịch đảo

#include <bits/stdc++.h>
using namespace std;

int change(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(change(a), change(b));
    return 0;
}