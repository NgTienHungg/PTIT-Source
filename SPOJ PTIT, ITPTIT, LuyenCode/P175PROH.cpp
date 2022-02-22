// https://www.spoj.com/PTIT/problems/P175PROH/
// P175PROH - ROUND 5H - Gặp bạn cũ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    long long l = max(l1, l2);
    long long r = min(r1, r2);
    if (l > r)
        cout << 0;
    else
    {
        if (k >= l && k <= r)
            cout << r - l;
        else
            cout << r - l + 1;
    }
    return 0;
}