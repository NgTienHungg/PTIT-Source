#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.3lf", (double)sum / n);
    return 0;
}