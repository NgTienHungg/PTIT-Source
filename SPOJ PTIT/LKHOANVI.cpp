// https://luyencode.net/problem/LKHOANVI
// LKHOANVI - Liệt kê các hoán vị

#include <bits/stdc++.h>
using namespace std;

int n, arr[10];
bool used[10] = {0};

void print()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i];
        if (i != n)
            cout << " ";
        else
            cout << endl;
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (!used[j])
        {
            arr[i] = j;
            used[j] = 1;
            if (i == n)
                print();
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    Try(1);
    return 0;
}