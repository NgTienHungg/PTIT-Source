// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/A
// A. Tập số nguyên kề cận

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, q;
int x, k;
int a[100001];

void TestCase()
{
    cin >> x >> k;
    int pos = lower_bound(a, a + n, x) - a;
    if (pos == n)
        pos -= 1;
    int i = pos - 1, j = pos;
    while (k--) {
        if (i < 0)
            cout << a[j++] << " ";
        else if (j == n)
            cout << a[i--] << " ";
        else if (abs(a[i] - x) <= abs(a[j] - x))
            cout << a[i--] << " ";
        else
            cout << a[j++] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);

    while (q--)
        TestCase();
    return 0;
}