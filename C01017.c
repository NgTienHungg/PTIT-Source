#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", (n + 1) * n / 2);
    }
    return 0;
}