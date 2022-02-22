#include <stdio.h>
#include <string.h>

void solve()
{
    char s[20];
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4' && i + 2 < l)
            i += 2;
        else
            printf("%c", s[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}