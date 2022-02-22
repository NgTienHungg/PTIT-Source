#include <stdio.h>
#include <string.h>

void solve()
{
    char s[105];
    gets(s);
    char res[105][105];
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(res[n++], token);
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
    {
        if (res[i][0] >= 'a' && res[i][0] <= 'z')
            res[i][0] -= 32;
        for (int j = 1; j < strlen(res[i]); j++)
            if (res[i][j] >= 'A' && res[i][j] <= 'Z')
                res[i][j] += 32;
        printf("%s ", res[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}