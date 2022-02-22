#include <stdio.h>
#include <stdbool.h>

bool check(long long n)
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

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long n;
        scanf("%lld", &n);
        if (check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}