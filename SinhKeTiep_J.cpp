/*
J. [ProPTIT-Algorithm-Sinh kế tiếp] Tập hợp

Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước.
Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s?
Các tập hợp là hoán vị của nhau chỉ được tính là một.
Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Input
Gồm nhiều bộ test (không quá 100 test).
Mỗi bộ test gồm 3 số nguyên n, k, s với 1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155. Input kết thúc bởi 3 số 0.

Output
Với mỗi test in ra số lượng các tập hợp thỏa mãn điều kiện đề bài.

Example

input
9 3 23
9 3 22
10 3 28
16 10 107
20 8 102
20 10 105
20 10 155
3 4 3
4 2 11
0 0 0

output
1
2
0
20
1542
5448
1
0
0
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k, s, d;
int a[100005];
bool stop;

void init()
{
    cin >> n >> k >> s;
    for (int i = 0; i < k; i++)
        a[i] = i + 1;
    stop = 0;
}

void sinh()
{
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + (i + 1))
        i--;
    if (i < 0)
        stop = 1;
    else
        a[i]++;
    for (int j = i + 1; j < k; j++)
        a[j] = a[j - 1] + 1;
}

bool check()
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
    return sum == s;
}

void solve()
{
    if (n < k)
    {
        cout << "0\n";
        return;
    }
    int d = 0;
    while (!stop)
    {
        if (check())
            d++;
        sinh();
    }
    cout << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    while (1)
    {
        init();
        if (n == 0 && k == 0 && s == 0)
            break;
        solve();
    }
    return 0;
}