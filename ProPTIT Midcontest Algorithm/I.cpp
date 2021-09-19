// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/I
// I. Xếp hàng trao giải

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[100005], b[100005];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; ++i) {
        int pos = binarySearch(b, 0, n - 1, a[i]);
        cout << pos << " ";
    }
    return 0;
}