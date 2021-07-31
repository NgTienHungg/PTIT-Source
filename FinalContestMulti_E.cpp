#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (k / 2 > n)
        cout << 0;
    else
    {
        int res, tb = k / 2;
        if (k % 2 == 0)
            res = min(tb - 1, n - tb);
        else
            res = min(tb, n - tb);
        cout << res;
    }
    return 0;
}