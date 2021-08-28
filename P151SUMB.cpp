// https://www.spoj.com/PTIT/problems/P151SUMB/
// P151SUMB - ROUND 1B - Đong gạo

#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int count = 0;
    // n = 3*i + 5*j, i nhỏ nhất có thể
    // i = (n - 5*j) / 3;
    for (int i = 0; i <= (n / 3); i++)
    {
        int j = (n - 3 * i) / 5;
        if ((3 * i + 5 * j) == n)
            return i + j;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}