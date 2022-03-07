// https://www.spoj.com/PTIT/problems/PTIT121H/
// PTIT121H - Tráo bài

#include <bits/stdc++.h>
using namespace std;

int a[1000005];

int main()
{
    int m, k;
    string s;
    cin >> m >> k >> s;
    for (int i = 0; i < m; ++i)
        a[i] = i;

    int index = 0; // Vị trí bắt đầu mảng
    for (int i = 0; s[i] != '.'; ++i)
    {
        if (s[i] == 'A')
            index = (index + 1) % m;
        else if (s[i] == 'B')
        {
            swap(a[index], a[(index + 1) % m]);
            index = (index + 1) % m;
        }
    }
    /* In ra các vị trí cần tìm ứng với index là vị trí đầu mảng */
    cout << a[(k - 1 + index) % m] << " " << a[(k + index) % m] << " " << a[(k + 1 + index) % m];
    return 0;
}