// https://www.spoj.com/PTIT/problems/BCPERMU/
// BCPERMU - Liệt kê hoán vị (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

int n, a[10];

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void print()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

void sort(int vt)
{
    for (int i = vt + 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[j] < a[i])
                swap(a[i], a[j]);
}

int main()
{
    cin >> n;
    init();
    print();
    while (1)
    {
        int vt = -1;
        for (int i = n - 1; i >= 1; i--)
            if (a[i] < a[i + 1])
            {
                vt = i;
                break;
            }
        if (vt == -1)
            break;
        for (int i = n; i > vt; i--)
            if (a[i] > a[vt])
            {
                swap(a[i], a[vt]);
                break;
            }

        sort(vt);
        print();
    }
    return 0;
}