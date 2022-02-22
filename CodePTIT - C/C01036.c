#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int res = 1;
    while (n > 0)
    {
        res *= n % 10;
        n /= 10;
    }
    printf("%d", res);
    return 0;
}