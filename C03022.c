#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool sum(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (s % 5 == 0)
        return 1;
    else
        return 0;
}

bool prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (sum(i) == 1 && prime(i) == 1)
        {
            printf("%d ", i);
            dem++;
        }
    printf("\n%d", dem);
    return 0;
}