/*
E. [ProPTIT-Algorithm-Sort and Search] Sắp xếp

Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng.
Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước.
Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}


Input
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng:
Dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k;
Dòng tiếp theo là n số A[i], các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤n≤1e4; 1≤A[i]≤1e5.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
5
4 5 6 4 5
15
1 4 5 9 7 8 8 5 6 9 9 9 2 8 10

output
4 4 5 5 6 
9 9 9 9 8 8 8 5 5 1 2 4 6 7 10 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n;
int a[100005];
int dd[100005];

void init()
{
    // Reset mảng đánh dấu
    for (int i = 0; i < 100005; i++)
        dd[i] = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dd[a[i]]++;
    }
}

bool cmp(int a, int b)
{
    if (dd[a] < dd[b])
        return 0;
    if (dd[a] == dd[b])
        if (a > b)
            return 0;
    return 1;
}

void solve()
{
    set<int> s(a, a + n);
    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < dd[v[i]]; j++)
            cout << v[i] << " ";
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

//! n <= 1e5