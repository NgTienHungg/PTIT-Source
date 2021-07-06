/*
F. [ProPTIT-Algorithm-Sort and Search] Giao của ba dãy

Cho ba dãy số A[], B[], C[] gồm N1, N2, N3 phần tử đã được sắp xếp.
Hãy đưa ra các phần tử có mặt trong cả ba dãy theo thứ tự tăng dần.
Nếu không có đáp án, in ra -1.

Input
Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test.
Mỗi bộ test gồm bốn dòng: dòng thứ nhất đưa vào N1, N2, N3 là số phần tử của mảng A[], B[], C[]; các dòng tiếp theo đưa vào 3 dãy A[], B[], C[].

Ràng buộc:
1≤T≤100;
1≤N1,N2,N3≤104,
0≤A[i],B[j],C[k]≤1018.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
1
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120

output
20 80 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int t, n1, n2, n3;
ll a[10004], b[10004], c[10004];

void init()
{
    cin >> n1 >> n2 >> n3;

    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    for (int i = 0; i < n3; i++)
        cin >> c[i];
}

bool binarySearch(ll a[], int l, int r, ll k)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
            return 1;
        if (a[m] > k)
            r = m - 1;
        else
            l = m + 1;
    }
    return 0;
}

void solve()
{
    bool ok = 0;
    for (int i = 0; i < n1; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        if (binarySearch(b, 0, n2 - 1, a[i]))
            if (binarySearch(c, 0, n3 - 1, a[i]))
            {
                ok = 1;
                cout << a[i] << " ";
            }
    }
    if (!ok)
        cout << -1;
    cout << endl;
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
    }
    return 0;
}