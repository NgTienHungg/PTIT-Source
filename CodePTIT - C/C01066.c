#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    printf("%d", min);
    return 0;
}