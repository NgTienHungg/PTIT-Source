/*
C. [ProPTIT-Algorithm-Sinh kế tiếp] Hoán vị kế tiếp

Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N.
Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X[].
Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X[] là {1, 2, 3, 5, 4}.

Input
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test.
  Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X[] của 1, 2, .., N.
- T, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤1e3.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
5
1 2 3 4 5
5
5 4 3 2 1

output
1 2 3 5 4 
1 2 3 4 5 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n;
int a[100005];

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void print()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sinh()
{
    int i = n - 2;
    while (i >= 0 && a[i] > a[i + 1])
        i--;
    if (i < 0)
        sort(a, a + n);
    else
    {
        int j = n - 1;
        while (a[j] <= a[i])
            j--;
        swap(a[i], a[j]);
        sort(a + i + 1, a + n);
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
        sinh();
        print();
    }
    return 0;
}