#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cs = 1, le = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 2;
        for (int j = 1; j <= le; j++)
        {
            if (j < cs)
            {
                printf("%d", a);
                a += 2;
            }
            if (j == cs)
            {
                printf("%d", a);
                a -= 2;
            }
            if (j > cs)
            {
                printf("%d", a);
                a -= 2;
            }
        }
        printf("\n");
        le += 2;
        cs += 1;
    }
    return 0;
}