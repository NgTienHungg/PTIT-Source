// https://www.spoj.com/PTIT/problems/PTIT127A/
// PTIT127A - Tổ chức kì thi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    int count = min(m / 2, n);
    m -= count * 2; // Hs nữ còn dư
    n -= count;     // Hs nam còn dư
    while (k > 0)
    {
        if (m > 0)
        {
            k--;
            m--;
        }
        else if (n > 0)
        {
            k--;
            n--;
        }
        else if (m == 0 && n == 0)
        {
            count--;
            m = 2;
            n = 1;
        }
    }
    cout << count;
    return 0;
}