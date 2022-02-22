#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int check(char c)
{
    if (c < '0' || c > '9')
        return 0; // Kí tự != số
    if ((c - '0') % 2 != 0)
        return 1; // Số lẻ
    else
        return 2; // Số chẵn
}

void solve()
{
    char s[1001];
    gets(s);
    int len = strlen(s);
    bool ok = 1;
    int even = 0, odd = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[0] == '0' || check(s[i]) == 0)
        {
            ok = 0;
            break;
        }
        else if (check(s[i]) == 1)
            odd++;
        else if (check(s[i]) == 2)
            even++;
    }
    if (ok == 0)
        printf("INVALID\n");
    else
    {
        if ((len % 2 == 0 && even > odd) || (len % 2 != 0 && odd > even))
            printf("YES\n");
        else
            printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}