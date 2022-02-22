#include <stdio.h>
#include <math.h>

int Multiply(int n)
{
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res *= i;
            while (n % i == 0)
                n /= i;
            if (n == 1)
                return res;
        }
    }
    return res * n;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", Multiply(n));
    }
    return 0;
}