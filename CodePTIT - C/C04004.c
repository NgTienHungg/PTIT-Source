#include <stdio.h>

long long fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    long long f1 = 1, f2 = 1, f;
    for (int i = 3; i <= n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibo(n));
    }
    return 0;
}