/*
B. [ProPTIT-Algorithm-Sinh kế tiếp] Tập con kế tiếp

Cho hai số N, K và một tập con K phần tử X[]=(X1,X2,..,XK) của 1, 2, .., N.
Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[].
Ví dụ N=5, K=3, X[] ={2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.

Input
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test.
  Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X[] là một tập con K phần tử của 1, 2, .., N.
- T, K, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤1e3.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
5 3
1 4 5
5 3
3 4 5

output
2 3 4 
1 2 3 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n, k;
int a[100005];

void init()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
        cin >> a[i];
}

void print()
{
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sinh()
{
    int i = k - 1;
    while (a[i] == n - k + (i + 1))
        i--;
    if (i < 0)
    {
        i = 0;
        a[i] = 1;
    }
    else
        a[i]++;
    for (int j = i + 1; j < k; j++)
        a[j] = a[j - 1] + 1;
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