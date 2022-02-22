#include <stdio.h>
#include <math.h>

long long ThuanNghich(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long n;
        scanf("%lld", &n);
        if (n == ThuanNghich(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}