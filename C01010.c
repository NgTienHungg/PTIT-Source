#include <stdio.h>

int main()
{
    int d, w = 0, y = 0;
    scanf("%d", &d);
    if (d >= 365)
    {
        y = d / 365;
        d = d % 365;
    }
    if (d >= 7)
    {
        w = d / 7;
        d = d % 7;
    }
    printf("%d %d %d", y, w, d);
    return 0;
}