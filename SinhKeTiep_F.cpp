/*
F. [ProPTIT-Algorithm-Sinh kế tiếp] Sinh hoán vị

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N.
Ví dụ với N = 3 ta có kết quả: 123, 132, 213, 231, 312, 321.

Input
- Một dòng duy nhất số tự nhiên N (1 ≤ N ≤ 10)

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
3

output
123 132 213 231 312 321 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
int a[100005];
bool stop;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    stop = 0;
}

void print()
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
}

void sinh()
{
    int i = n - 2;
    while (i >= 0 && a[i] >= a[i + 1])
        i--;
    if (i < 0)
        stop = 1;
    else
    {
        for (int j = n - 1; j > i; j--)
            if (a[j] > a[i])
            {
                swap(a[i], a[j]);
                break;
            }
        sort(a + i + 1, a + n);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    while (!stop)
    {
        print();
        sinh();
    }
    return 0;
}