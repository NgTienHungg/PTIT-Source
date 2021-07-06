/*
I. [ProPTIT-Algorithm-Sort and Search] Sắp xếp chữ số

Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[].

Input
Dòng đầu tiên đưa vào n là số phần tử của mảng A[].
Dòng tiếp theo là n số A[i]
Điều kiện: 1≤n≤103; 0≤A[i]≤1e18.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example
input
4
101 622 333 446

output
0 1 1 2 2 3 3 3 4 4 6 6 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
vector<string> v(1005);

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void solve()
{
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + v[i];
    sort(res.begin(), res.end());
    for (int i = 0; i < res.length(); i++)
        cout << res[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    solve();
    return 0;
}