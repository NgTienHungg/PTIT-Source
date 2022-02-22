#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long n;
        scanf("%lld", &n);
        int x = sqrt(n);
        if (x * x == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}