/*
H. [ProPTIT-Algorithm-Sort and Search] Help Sudo

Sudo là 1 cậu bé rất thích chơi trốn tìm.
Cậu thường rủ bạn bè chơi trên khu phố nơi có 1 hàng cây gồm n cái cây được cắt tỉa để chiều cao tăng dần.
Sudo lại rất thích số x nên khi chơi cậu sẽ chốn ở cây có độ cao là x.
Tuy nhiên hàng cây rất dài và Sudo đang rất khó khăn để tìm cây có chiều cao là x.
Bạn hãy giúp Sudo nhé.

Input
Dòng đầu tiên là n và x.(1≤n,x≤1e6)
Dòng tiếp theo là n số a[i] là chiều cao của các cây.(1≤a[i]≤1e6)

Output
In ra "YES" nếu có cây có chiều cao x.
In "NO" trong trường hợp còn lại.

Example

input
5 16
2 4 7 9 16

output
YES
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, x;
int a[1000006];

int binarySearch()
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
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

void init()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void solve()
{
    if (binarySearch() != -1)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    sort(a, a + n);
    solve();
    return 0;
}