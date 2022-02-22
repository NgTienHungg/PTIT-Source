#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (i < k)
            printf("%d ", a[n - k + i]);
        else
            printf("%d ", a[i - k]);
    }
    return 0;
}