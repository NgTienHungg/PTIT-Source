/*
F. [ProPTIT-Algorithm-Divide and Conquer] Tính lũy thừa ma trận

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X=AK với K là số nguyên cho trước.
Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 1e9+7.

Input
Dòng đầu tiên là số lượng bộ test T (T≤100).
Mỗi test bắt gồm một số nguyên N và K (1≤N≤10,1≤K≤1e9) là kích thước của ma trận và số mũ.

Output
Với mỗi test, in ra kết quả của ma trận X.

Example

input
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9

output
8 5 
5 3 
597240088 35500972 473761863 
781257150 154135232 527013321 
965274212 272769492 580264779 
*/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7;


ll n, k;
ll a[10][10], dv[10][10];

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            dv[i][j] = a[i][j];
        }
    }
}

void Mul(ll a[10][10], ll b[10][10])
{
    ll res[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ll s = 0;
            for (int z = 0; z < n; z++)
            {
                s += a[i][z] * b[z][j];
                s %= mod;
            }
            res[i][j] = s;
        }
    }

    // Update a[][]
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            a[i][j] = res[i][j];
    }
}

void Pow(ll a[10][10], ll k)
{
    if (k == 1)
        return;
    Pow(a, k / 2);
    Mul(a, a);
    if (k & 1)
        Mul(a, dv);
}

void solve()
{
    Pow(a, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
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