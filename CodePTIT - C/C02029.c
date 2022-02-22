#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100][100];
    int chantren = 1;
    int chanphai = 1;
    int size = 65;
    for (int j = 1; j <= chanphai, j <= n; j++)
    {
        for (int i = 1; i >= chantren, i <= n; i++)
        {
            if (i >= chantren && j <= chanphai)
            {
                a[i][j] = size;
                size++;
            }
        }
        chanphai++;
        chantren++;
    }
    chanphai = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= chanphai; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
        chanphai++;
    }
    return 0;
}