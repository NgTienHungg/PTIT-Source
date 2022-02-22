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
    int a[101];
    int chan[101], nc = 0;
    int le[101], nl = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            chan[nc++] = a[i];
        else
            le[nl++] = a[i];
    }
    for (int i = 0; i < nc; i++)
    {
        for (int j = i + 1; j < nc; j++)
            if (chan[j] < chan[i])
                swap(&chan[i], &chan[j]);
        printf("%d ", chan[i]);
    }
    for (int i = 0; i < nl; i++)
    {
        for (int j = i + 1; j < nl; j++)
            if (le[j] < le[i])
                swap(&le[i], &le[j]);
        printf("%d ", le[i]);
    }
    return 0;
}