#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int f[30];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            f[i] = 0;
        else if (i == 1)
            f[i] = 1;
        else
            f[i] = f[i - 1] + f[i - 2];
        printf("%d ", f[i]);
    }
    return 0;
}