// https://www.spoj.com/PTIT/problems/BCCOM/
// BCCOM - Số nén tối giản (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (solve(n) != n)
            n = solve(n);
        printf("%d\n", n);
    }
}