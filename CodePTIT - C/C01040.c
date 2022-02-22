#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            sum += i;
            sum += n / i;
            if (i * i == n)
                sum -= i;
        }
    if (sum == n)
        printf("1");
    else
        printf("0");
    return 0;
}