// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/G
// G. Slope

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[200001];
int b[200001]; // Tăng dần từ trái qua phải
int c[200001]; // Tăng dần từ phải qua trái

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i) {
        if (a[i] > a[i - 1])
            b[i] = b[i - 1] + 1;
        else
            b[i] = 1;
    }
    for (int i = n; i >= 1; --i) {
        if (a[i] > a[i + 1])
            c[i] = c[i + 1] + 1;
        else
            c[i] = 1;
    }
    for (int i = 1; i <= n; ++i)
        cout << b[i] + c[i] - 1 << " ";
    return 0;
}