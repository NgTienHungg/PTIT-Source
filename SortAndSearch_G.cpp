/*
G. [ProPTIT-Algorithm-Sort and Search] Sudo

Cho dãy số A[] gồm có N phần tử không âm và số K.
Nhiệm vụ của bạn là hãy xác định xem có tìm được 1 dãy con liên tiếp mà tổng các phần tử bằng K hay không?

Input
Dòng đầu tiên là số lượng bộ test T (1≤T≤20).
Mỗi test gồm số nguyên N và K (1≤N≤105, 0≤K≤1e18).
Dòng tiếp theo gồm N số nguyên A[i] (0≤A[i]≤1e9).

Output
Nếu không tìm được in "NOT FOUND".
Nếu tìm được thì in ra dãy đứng đầu tiên. (Dãy được coi là đầu tiên khi index của phần tử đầu tiên là nhỏ nhất)

Example

input
3
5 63
14 22 15 26 31
6 73
30 8 35 9 29 44
3 22
13 20 14

output
22 15 26 
30 8 35 
NOT FOUND
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int t, n;
ll k, a[100005], f[100005];

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Mảng cộng dồn
    f[0] = a[0];
    for (int i = 1; i < n; i++)
        f[i] = f[i - 1] + a[i];
}

int binarySearch(ll a[], int l, int r, ll x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

void solve()
{
    for (int i = 0; i < n; i++)
    {
        if (f[i] == k)
        {
            for (int j = 0; j <= i; j++)
                cout << a[j] << " ";
            return;
        }
        if (f[i] > k)
        {
            int idx = binarySearch(f, 0, i - 1, f[i] - k);
            if (idx != -1)
            {
                for (int j = idx + 1; j <= i; j++)
                    cout << a[j] << " ";
                return;
            }
        }
    }
    cout << "NOT FOUND";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
    return 0;
}