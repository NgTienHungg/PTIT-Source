/*
D. [ProPTIT-Algorithm-Sort and Search] Simple Search

Cho 1 dãy số a có n phần tử và 1 số k. Đếm xem trong dãy a có bao nhiêu cặp x,y mà x+y=k.

Input
Dòng đầu tiên là số bộ test T (1≤T≤100).
T dòng tiếp theo:
Dòng đầu là số n, k (2≤n≤5.1e4, −1e9≤k≤1e9).
Dòng tiếp theo là mảng a có n phần tử. (−1e9≤a[i]≤1e9).

Output
1 dòng ghi đáp án của bài toán.

Example

input
2
6 11
1 10 5 6 4 1
5 5
1 1 3 2 2

output
3
2
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n, k;
vector<int> v;

void init()
{
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void solve()
{
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        int x = k - v[i];
        if (x < v[i])
            break;
        vector<int>::iterator low = lower_bound(v.begin() + i + 1, v.end(), x);
        vector<int>::iterator up = upper_bound(v.begin() + i + 1, v.end(), x);
        d += up - low;
    }
    cout << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        sort(v.begin(), v.end());
        solve();
    }
    return 0;
}