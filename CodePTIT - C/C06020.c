#include <stdio.h>
#include <ctype.h>
#include <string.h>

char email[105][55];
int l = 0;

void solve(char s[55])
{
    char res[105][55];
    int d = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(res[d++], token);
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < d; i++)
    {
        if (i == d - 1)
            for (int j = 0; j < strlen(res[i]); j++)
                res[i][j] = tolower(res[i][j]);
        else
            res[i][0] = tolower(res[i][0]);
    }
    char tg[55] = {};
    strcpy(tg, res[d - 1]);
    for (int i = 0; i < d - 1; i++)
        tg[strlen(tg)] = res[i][0];
    strcpy(email[l++], tg);
}

void Print()
{
    for (int i = 0; i < l; i++)
    {
        int d = 1;
        for (int j = 0; j < i; j++)
            if (strcmp(email[i], email[j]) == 0)
                d++;
        printf("%s", email[i]);
        if (d > 1)
            printf("%d", d);
        printf("@ptit.edu.vn\n");
    }
}

int main()
{
    int n;
    scanf("%d\n", &n);
    while (n--)
    {
        char s[55];
        gets(s);
        solve(s);
    }
    Print();
    return 0;
}