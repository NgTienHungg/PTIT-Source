#include <stdio.h>
#include <math.h>

int solve(int n)
{
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            res = res + i + n / i;
        if (i * i == n)
            res = res - i;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (solve(i) == i)
            printf("%d ", i);
    }
    return 0;
}