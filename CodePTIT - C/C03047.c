#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n)
{
    int even = 0, odd = 0;
    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    if (even == odd)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    int d = 0;
    for (int i = l; i <= r; i++)
        if (check(i))
        {
            printf("%d ", i);
            d++;
            if (d % 10 == 0)
                printf("\n");
        }
    return 0;
}