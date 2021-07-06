/*
I. [ProPTIT-Algorithm-Sinh kế tiếp] Chọn số từ ma trận vuông cấp N

Cho ma trận vuông C cấp N gồm N^2 số tự nhiên và số tự nhiên K (các số trong ma trận không nhất thiết phải khác nhau và đều không quá 100, K không quá 1e4).
Hãy viết chương trình lấy mỗi hàng, mỗi cột duy nhất một phần tử sao cho tổng các phần tử này đúng bằng K.

Input
Dòng 1 ghi hai số N và K. N dòng tiếp theo ghi ma trận C.

Output
dòng đầu ghi số cách tìm được. Mỗi dòng tiếp theo ghi một cách theo vị trí của số đó trong lần lượt từng hàng của ma trận. Xem ví dụ để hiểu rõ hơn.

Example

input
3 10
2 4 3
1 3 6
4 2 4

output
2
1 3 2 
3 2 1 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k;
int a[1005][1005];     // input
int b[1005];           // sinh
vector<vector<int>> v; // output
bool stop;

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        b[i] = i;
    stop = 0;
}

void sinh()
{
    int i = n - 2;
    while (i >= 0 && b[i] >= b[i + 1])
        i--;
    if (i < 0)
        stop = 1;
    else
    {
        int j = n - 1;
        while (j > i && b[j] <= b[i])
            j--;
        swap(b[i], b[j]);
        sort(b + i + 1, b + n);
    }
}

bool check()
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i][b[i]];
    return s == k;
}

void solve()
{
    while (!stop)
    {
        if (check())
        {
            vector<int> temp(b, b + n);
            v.push_back(temp);
        }
        sinh();
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < n; j++)
            cout << v[i][j] + 1 << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    solve();
    return 0;
}