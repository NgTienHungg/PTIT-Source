#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{
    int a[4][2];
    int min_x = 100, max_x = -100;
    int min_y = 100, max_y = -100;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
        min_x = min(min_x, a[i][0]);
        max_x = max(max_x, a[i][0]);
        min_y = min(min_y, a[i][1]);
        max_y = max(max_y, a[i][1]);
    }
    int MAX = max(max_x - min_x, max_y - min_y);
    printf("%d", MAX * MAX);
    return 0;
}