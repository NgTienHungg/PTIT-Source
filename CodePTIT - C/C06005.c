#include <stdio.h>
#include <string.h>

int Findd(char a[105][105], char s[105], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i], s) == 0)
            return i;
    return -1;
}

int main()
{
    char s[105];
    char a[105][105];
    int b[105] = {0};
    int n = 0;
    while (scanf("%s", s) != -1)
    {
        for (int i = 0; i < strlen(s); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        int vt = Findd(a, s, n);
        if (vt == -1)
        {
            strcpy(a[n], s);
            b[n] = 1;
            n++;
        }
        else
            b[vt]++;
    }
    for (int i = 0; i < n; i++)
        printf("%s %d\n", a[i], b[i]);
    return 0;
}