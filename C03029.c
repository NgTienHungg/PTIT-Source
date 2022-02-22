#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        int tg = s[i] - '0';
        if (tg % 2 != 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[20];
        scanf("%s", &s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}