#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("0");
        return 0;
    }
    printf("%lld %lld", (a + b) * 2, a * b);
    return 0;
}