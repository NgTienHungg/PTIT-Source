#include <stdio.h>

long long gt(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += gt(i);
    }
    printf("%lld", sum);
    return 0;
}