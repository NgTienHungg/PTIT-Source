#include <stdio.h>

int main()
{
    int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", n * 2);
    }
    return 0;
}