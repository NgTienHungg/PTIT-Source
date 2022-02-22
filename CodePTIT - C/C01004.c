#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%.15lf\n", (double)1 / n);
    }
    return 0;
}