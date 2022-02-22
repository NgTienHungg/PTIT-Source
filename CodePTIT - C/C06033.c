#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve(int n)
{
    char a[105], b[105], c[205];
    scanf("%s %s %s", &a, &b, &c);
    int d = 0;
    while (d < 50)
    {
        d++;
        char res[205];
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            res[l++] = b[i];
            res[l++] = a[i];
        }
        res[l] = '\0';
        if (strcmp(res, c) == 0)
        {
            printf("%d\n", d);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = res[i];
            b[i] = res[i + n];
        }
    }
    printf("-1\n");
}

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        solve(n);
    }
    return 0;
}

//todo: Chỉ cần thử đến 50 vòng lặp là có thể kết luận