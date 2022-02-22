#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int m = ceil(sqrt(a));
    int n = floor(sqrt(b));
    printf("%d\n", n - m + 1);
    for (int i = m; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}