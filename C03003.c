#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2;; i++)
    {
        if (snt(i))
        {
            printf("%d\n", i);
            n--;
            if (n == 0)
                break;
        }
    }
    return 0;
}