#include <stdio.h>

int main()
{
    int a, b, c;
    char d, e;
    scanf("%d %c %d %c %d", &a, &d, &b, &e, &c);
    if (a + b == c)
        printf("YES");
    else
        printf("NO");
    return 0;
}