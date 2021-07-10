/*
B. [ProPTIT-Algorithm-Divide and Conquer] Biến đổi dãy số

Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi dãy số như sau:
Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.
Ví dụ với 2 bước biến đổi, ta có [1] à [1 2 1] à [1 2 1 3 1 2 1].
Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

Input
Dòng đầu tiên là số lượng bộ test T (T≤20).
Mỗi test gồm số nguyên dương N và K (1≤N≤50,1≤K≤2^N−1).

Output
Với mỗi test, in ra đáp án trên một dòng.

Example

input
2
3 2
4 8

output
2
4
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Pow(ll n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    ll tmp = Pow(n / 2);
    ll res = tmp * tmp;
    if (n & 1)
        return res * 2;
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll len = Pow(n - 1);
    while (1)
    {
        if (k == 1)
        {
            cout << 1;
            break;
        }
        if (k == len)
        {
            cout << n;
            break;
        }
        if (k > len)
            k = len - (k - len);
        n--;
        len /= 2;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}