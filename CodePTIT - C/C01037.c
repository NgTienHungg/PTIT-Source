#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    printf("%lld", (long long)(a + b) * (b - a + 1) / 2);
    return 0;
}