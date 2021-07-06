/*
E. [ProPTIT-Algorithm-Sinh kế tiếp] Sinh tổ 

Cho hai số nguyên dương N và K. Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của 1, 2, .., N.
Ví dụ với N=5, K=3 ta có 10 tập con của 1, 2, 3, 4, 5 như sau: {1, 2, 3}, {1, 2, 4},{1, 2, 5},{1, 3, 4},{1, 3, 5},{1, 4, 5},{2, 3, 4},{2, 3, 5},{2, 4, 5},{3, 4, 5}.

Input
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, n thỏa mãn ràng buộc: 1≤T, N≤10.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
5 2
5 3

output
12 13 14 15 23 24 25 34 35 45 
123 124 125 134 135 145 234 235 245 345 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n, k;
int a[100005];
bool stop;

void init()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
        a[i] = i + 1;
    stop = 0;
}

void print()
{
    for (int i = 0; i < k; i++)
        cout << a[i];
    cout << " ";
}

void sinh()
{
    int i = k - 1;
    while (a[i] == n - k + (i + 1))
        i--;
    if (i < 0)
        stop = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j < k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        while (!stop)
        {
            print();
            sinh();
        }
        cout << endl;
    }
    return 0;
}