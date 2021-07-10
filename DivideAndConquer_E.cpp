/*
E. [ProPTIT-Algorithm-Divide and Conquer] Vị trí

Cho dãy số A[] gồm có N phần tử đã được sắp xếp tăng dần và số K.
Nhiệm vụ của bạn là kiểm tra xem số K có xuất hiện trong dãy số hay không.
Nếu có hãy in ra vị trí trong dãy A[], nếu không in ra "NO".

Input
Dòng đầu tiên là số lượng bộ test T (T≤10).
Mỗi test bắt đầu bằng số nguyên N và K (N≤107,0≤K≤1e7).
Dòng tiếp theo gồm N số nguyên A[i] (0≤A[i]≤1e7), các phần tử là riêng biệt.

Output
Với mỗi test in ra trên một dòng đáp án tìm được.

Example

input
2
5 3
1 2 3 4 5
6 5
0 1 2 3 9 10

output
3
NO
*/

#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100005], b[100005];
int n1, n2;

void init()
{
    cin >> n >> k;
    n1 = n2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i < n / 2)
            a[n1++] = x;
        else
            b[n2++] = x;
    }
}

int bSearch(int a[], int l, int r, int k)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
            return m;
        if (a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

void solve()
{
    int vt1 = bSearch(a, 0, n1 - 1, k);
    int vt2 = bSearch(b, 0, n2 - 1, k);
    if (vt1 != -1)
        cout << vt1 + 1;
    else if (vt2 != -1)
        cout << vt2 + n / 2 + 1;
    else
        cout << "NO";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        init();
        solve();
    }
    return 0;
}