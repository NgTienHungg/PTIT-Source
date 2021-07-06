/*
H. [ProPTIT-Algorithm-Sinh kế tiếp] Mã GRAY

Số nhị phân được xem là cách mặc định biểu diễn các số.
Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray.
Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít.
Ví dụ với n=3 ta có 23 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100.
Hãy viết chương trình liệt kê các mã Gray có độ dài n.

Input
- Dòng đầu tiên là số lượng test T.
- T dòng kế tiếp ghi lại mỗi dòng một test. Mỗi test là một số tự nhiên n.
- T, n thỏa mãn ràng buộc: 1≤T, n≤10.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
2
3

output
00 01 11 10 
000 001 011 010 110 111 101 100 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n;
vector<string> v;

void init()
{
    cin >> n;
    v.clear();
}

void solve()
{
    v.push_back("0");
    v.push_back("1");
    for (int i = 2; i <= n; i++)
    {
        for (int j = v.size() - 1; j >= 0; j--)
            v.push_back(v[j]);
        for (int j = 0; j < v.size(); j++)
        {
            if (j < v.size() / 2)
                v[j] = "0" + v[j];
            else
                v[j] = "1" + v[j];
        }
    }
}

void print()
{
    for (int i = 0; i < v.size(); i++)
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
        print();
    }
    return 0;
}