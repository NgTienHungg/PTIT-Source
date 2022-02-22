#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ThuanNghich(char s[])
{
    int l = strlen(s);
    for (int i = 0; i < l / 2; i++)
        if (s[i] != s[l - 1 - i])
            return 0;
    return 1;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    char s[1005];
    int MaxLen = 0;
    int n = 0;
    char res[1005][1005]; // Các từ thuận nghịch
    int dd[1005] = {0};   // Số lần xuất hiện
    while (scanf("%s", s) != -1)
    {
        if (ThuanNghich(s))
        {
            MaxLen = max(MaxLen, strlen(s));
            int xh = -1; // xh: xuất hiện
            for (int i = 0; i < n; i++)
                if (strcmp(res[i], s) == 0)
                {
                    xh = i;
                    break;
                }
            if (xh != -1)
                dd[xh]++;
            else
            {
                strcpy(res[n], s);
                dd[n] = 1;
                n++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (strlen(res[i]) == MaxLen)
            printf("%s %d\n", res[i], dd[i]);
    return 0;
}