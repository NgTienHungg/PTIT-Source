#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = 65 + n - 2;
    int dem = n;
    for (int i = n; i >= 2; i--)
    {
        int d = s;
        for (int j = 1; j <= dem; j++)
        {
            printf("%c", d);
            d++;
        }
        dem--;
        s--;
        printf("\n");
    }
    printf("@");
    return 0;
}