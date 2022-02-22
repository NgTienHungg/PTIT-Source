#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(&a[i], &a[j]);
    printf("%d ", a[0]);
    for (int i = 1; i < n; i++)
        if (a[i] < a[0])
        {
            printf("%d", a[i]);
            break;
        }
    return 0;
}