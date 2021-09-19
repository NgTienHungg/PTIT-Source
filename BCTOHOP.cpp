// https://www.spoj.com/PTIT/problems/BCTOHOP/
// BCTOHOP - Sinh tổ hợp (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15];
bool stop = 0;

void init()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void print()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sinh()
{
    for (int i = k; i > 0; i--)
        if (a[i] != n - k + i)
        {
            a[i] += 1;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            return;
        }
    stop = 1;
}

int main()
{
    cin >> n >> k;
    init();
    while (!stop)
    {
        print();
        sinh();
    }
}