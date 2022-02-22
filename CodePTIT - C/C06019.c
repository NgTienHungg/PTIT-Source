#include <stdio.h>
#include <string.h>

int main()
{
    char s[51];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    char res[51][51];
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(res[n++], token);
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%s", res[i]);
        else
            printf("%c", res[i][0]);
    }
    printf("@ptit.edu.vn");
    return 0;
}