#include <stdio.h>

void insertionSort(int a[], int n)
{
    int key, j;
    for (int i = 0; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        printf("Buoc %d: ", i);
        for (int j = 0; j <= i; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertionSort(a, n);
    return 0;
}