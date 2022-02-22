#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("0 ");
        int id = 0;
        for (int j = i; j < n; j++)
            printf("%d ", id++);
        printf("\n");
    }
    return 0;
}