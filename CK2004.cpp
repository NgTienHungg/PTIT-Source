// https://code.itptit.com/problems/100060
// Vệ sinh nhà cửa thường xuyên

#include <bits/stdc++.h>
using namespace std;

int dd[100005] = {0};

/* Đánh dấu các ước của các số */
void solve(int n)
{
    if (n < 2)
        return;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            dd[i] += 1;
            while (n % i == 0)
                n /= i;
        }
        if (n == 1)
            return;
    }
    dd[n] += 1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        solve(a[i]);
    }
    
    int Max = 1;
    for (int i = 2; i <= 1e5; ++i)
    {
        if (dd[i] > Max)
            Max = dd[i];
    }
    cout << Max;
    return 0;
}