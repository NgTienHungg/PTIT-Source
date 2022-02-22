#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 1;
    for (int i = 2; i <= n; i++)
        sum += (double)1 / i;
    printf("%.4lf", sum);
    return 0;
}