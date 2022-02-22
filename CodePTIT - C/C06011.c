#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char s[500])
{
    int l = strlen(s);
    if (s[0] != '8' || s[l - 1] != '8')
        return 0;
    int sum = 0;
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
            return 0;
        sum += (s[i] - 48) * 2;
    }
    if (l % 2 != 0)
        sum += s[l / 2] - 48;
    if (sum % 10 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[500];
        scanf("%s", s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}