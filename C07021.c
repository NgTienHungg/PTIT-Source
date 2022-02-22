#include <stdio.h>

typedef struct Student
{
    int id;
    char name[100];
    float a, b, c, sum;
} STD;

void swap(STD *i, STD *j)
{
    STD temp = *i;
    *i = *j;
    *j = temp;
}

void add(STD sv[], int *stt)
{
    sv[*stt].id = *stt + 1;
    scanf("\n%[^\n]s", sv[*stt].name);
    scanf("%f %f %f", &sv[*stt].a, &sv[*stt].b, &sv[*stt].c);
    sv[*stt].sum = sv[*stt].a + sv[*stt].b + sv[*stt].c;
    *stt += 1;
}

void update(STD sv[], int k)
{
    scanf("\n%[^\n]s", sv[k - 1].name);
    scanf("%f %f %f", &sv[k - 1].a, &sv[k - 1].b, &sv[k - 1].c);
    sv[k - 1].sum = sv[k - 1].a + sv[k - 1].b + sv[k - 1].c;
}

void sort(STD sv[], int stt)
{
    for (int i = 0; i < stt - 1; i++)
        for (int j = i + 1; j < stt; j++)
            if (sv[j].sum < sv[i].sum)
                swap(&sv[i], &sv[j]);
}

void display(STD sv[], int stt)
{
    for (int i = 0; i < stt; i++)
        printf("%d %s %.1f %.1f %.1f\n", sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
}

int main()
{
    int n;
    STD sv[100];
    int stt = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 1)
        {
            int k;
            scanf("%d", &k);
            for (int i = 0; i < k; i++)
                add(sv, &stt);
            printf("%d\n", k);
        }
        if (n == 2)
        {
            int k;
            scanf("%d", &k);
            update(sv, k);
            printf("%d\n", k);
        }
        if (n == 3)
            break;
    }
    sort(sv, stt);
    display(sv, stt);
    return 0;
}