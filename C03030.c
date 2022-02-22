#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n)
{
    int d = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 > d)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

void solve()
{
    int n;
    scanf("%d", &n);
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    for (int i = l; i <= r; i++)
        if (check(i))
            printf("%d ", i);
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}