#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[201] = {};
        gets(s);
        int n = 0;
        char *token = strtok(s, " ");
        while (token != NULL)
        {
            n++;
            token = strtok(NULL, " ");
        }
        printf("%d\n", n);
    }
    return 0;
}