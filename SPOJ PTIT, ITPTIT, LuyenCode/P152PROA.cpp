// https://www.spoj.com/PTIT/problems/P152PROA/
// P152PROA - ROUND 2A - Nguyên tố cùng nhau

#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int ucln(int a, int b)
{
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    int x;
    cin >> x;
    int count = 0;
    for (int i = 1; i <= x; i++)
        if (ucln(i, x) == 1)
            count++;
    if (ktnt(count))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}