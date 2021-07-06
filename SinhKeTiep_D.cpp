/*
D. [ProPTIT-Algorithm-Sinh kế tiếp] Xâu AB có độ dài N

Xâu ký tự str được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự 'A' hoặc là ký tự 'B'.
Ví dụ xâu str="ABBABB" là xâu AB độ dài 6. Nhiệm vụ của bạn là hãy liệt kê tất cả các xâu AB có độ dài n.

Input
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.
- T, n thỏa mãn ràng buộc: 1≤T≤10; 1≤n≤10.

Output
Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâu cách nhau 1 khoảng trống.

Example

input
2
2
3

output
AA AB BA BB 
AAA AAB ABA ABB BAA BAB BBA BBB 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n;
char a[100005];
bool stop;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i] = 'A';
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
    int i = n - 1;
    while (i >= 0 && a[i] == 'B')
        a[i--] = 'A';
    if (i < 0)
        stop = 1;
    else
        a[i] = 'B';
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