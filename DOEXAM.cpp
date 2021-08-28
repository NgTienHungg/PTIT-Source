// https://luyencode.net/problem/DOEXAM
// DOEXAM - Làm bài thi

#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[30], b[30], res = 0;

void init()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solve()
{
    int d = 0; // Số lượng bài làm được
    int s = 0; // Điểm
    for (int i = 1; i <= n; ++i)
    {
        /* Nếu 2 bài liên tiếp không làm thì dừng luôn */
        if (i < n && b[i] == 0 && b[i + 1] == 0)
        {
            if (s > res)
                res = s;
            return;
        }

        if (b[i])
        {
            s += a[i];
            d += 1;
        }

        /* Nếu làm nhiều hơn k bài thì dừng luôn */
        if (d > k)
            return;
    }
    if (d == k && s > res)
        res = s;
}

/* Sinh nhị phân */
void Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        b[i] = j;
        if (i == n)
            solve();
        else
            Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    Try(1);
    cout << res;
    return 0;
}