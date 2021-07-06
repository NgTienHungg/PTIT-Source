/*
G. [ProPTIT-Algorithm-Sinh kế tiếp] Phân tích số

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các cách phân tích số tự nhiên N thành tổng các số tự nhiên nhỏ hơn hoặc bằng N.
Phép hoán vị vủa một cách được xem là giống nhau.
Ví dụ với N = 5 ta có kết quả là: (5), (4, 1), (3, 2), (3, 1, 1), (2, 2, 1), (2, 1, 1, 1), (1, 1, 1, 1, 1).

Input
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, n thỏa mãn ràng buộc: 1≤T, N≤10.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
4
5

output
(4) (3 1) (2 2) (2 1 1) (1 1 1 1) 
(5) (4 1) (3 2) (3 1 1) (2 2 1) (2 1 1 1) (1 1 1 1 1) 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k;
int a[100005];
bool stop;

void init()
{
    cin >> n;
    k = 1;
    a[k] = n;
    stop = 0;
}

void print()
{
    for (int i = 1; i <= k; i++)
    {
        if (i == 1)
            cout << "(";
        cout << a[i];
        if (i == k)
            cout << ") ";
        else
            cout << " ";
    }
}

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == 1)
        i--;
    if (i == 0)
        stop = 1;
    else
    {
        a[i] -= 1;
        int d = k - i + 1;
        k = i;
        for (int j = i + 1; j <= i + d / a[i]; j++)
            a[j] = a[i];

        k += d / a[i];
        if (d % a[i])
            a[++k] = d % a[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
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