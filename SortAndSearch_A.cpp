/*
A. [ProPTIT-Algorithm-Sort and Search] Số bé thứ k

Cho 1 dãy số nguyên. Bạn hãy tìm phần tử ở vị trí thứ k sau khi sắp xếp tăng dần.

Input
Dòng đầu tiên là 2 số n,k. (1≤n≤1e5, 1≤k≤n)
Dòng tiếp theo là n số nguyên dương.(1≤a[i]≤1e5)

Example

input
9 3
9 5 2 8 51 4 46 98 100

output
5
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, k;
int a[100005];

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void quickSort(int l, int r)
{
    int i = l;
    int j = r;
    int pv = a[(l + r) / 2];
    while (i <= j)
    {
        while (a[i] < pv)
            i++;
        while (a[j] > pv)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quickSort(l, j);
    if (i < r)
        quickSort(i, r);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    quickSort(0, n - 1);
    cout << a[k - 1];
    return 0;
}

//! Dùng mảng nhanh hơn vector