/*
N. Chia Đều

Cho dãy số A có N phần tử và số K.
Hãy đếm số cách chia dãy A thành K nhóm các phần tử liên tiếp sao cho tổng giá trị của mỗi nhóm đều bằng nhau.

Input
Dòng đầu ghi hai số N và K (0<N≤12;0<K<N)
Dòng thứ hai ghi N số của dãy A (−10000≤A[i]≤10000)

Output
In ra số cách thỏa mãn

Examples

input
3 2
-2 0 -2

output
2


input
3 2
1 2 3

output
1
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k;
int a[15];
int res = 0;

void Try(int x, int l, int r, int k)
{
    if (l > r)
        return;
    if (k == 1)
    {
        if (a[r] - a[l - 1] == x)
            res += 1;
        return;
    }
    for (int i = l; i <= r; ++i)
    {
        if (a[i] - a[l - 1] == x)
            Try(x, i + 1, r, k - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n >> k;
    a[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    if (k == 1)
        res = 1;
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            int x = a[i];
            Try(x, i + 1, n, k - 1);
        }
    }
    cout << res;
    return 0;
}