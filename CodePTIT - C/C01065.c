#include <stdio.h>
#include <string.h>

int main()
{
    char s[15];
    scanf("%s", s);
    int dd[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int x = s[i] - '0';
        if (x == 2 || x == 3 || x == 5 || x == 7)
            dd[x]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        int x = s[i] - '0';
        if (dd[x] > 0)
        {
            printf("%d %d\n", x, dd[x]);
            dd[x] = 0;
        }
    }
    return 0;
}