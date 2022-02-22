#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n)
{
    int sum = 0, res = 0, a = n;
    while (a > 0)
    {
        res = res * 10 + a % 10;
        sum += res % 10;
        a /= 10;
    }

    if (sum % 10 != 0)
        return 0;
    if (res != n)
        return 0;
    return 1;
}

void solve()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    for (long long i = l; i <= r; i++)
        if (check(i))
            dem++;
    printf("%d\n", dem);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}