// https://www.spoj.com/PTIT/problems/P142SUMA/
// P142SUMA - ROUND 2A - Tìm số

#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    int x = int(sqrt(2 * n));
    if (x * (x + 1) == 2 * n)
        return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1;; i++)
    {
        int a = i * (i + 1) / 2;
        if (a >= n)
            break;
        int b = n - a;
        if (check(b))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}