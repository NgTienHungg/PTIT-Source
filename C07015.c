#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100], date[100];
    float d1, d2, d3, sum;
};

void init(struct Student sv[], int n, int i)
{
    fflush(stdin);
    scanf("\n%[^\n]s", sv[i].name);
    scanf("%s", sv[i].date);
    scanf("%f %f %f", &sv[i].d1, &sv[i].d2, &sv[i].d3);
    sv[i].sum = sv[i].d1 + sv[i].d2 + sv[i].d3;
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Student sv[n];
    for (int i = 0; i < n; i++)
        init(sv, n, i);
    float max = 0;
    for (int i = 0; i < n; i++)
        if (sv[i].sum > max)
            max = sv[i].sum;
    for (int i = 0; i < n; i++)
        if (sv[i].sum == max)
            printf("%d %s %s %.1f\n", i + 1, sv[i].name, sv[i].date, sv[i].sum);
    return 0;
}