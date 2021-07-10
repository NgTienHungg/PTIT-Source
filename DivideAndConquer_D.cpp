/*
D. [ProPTIT-Algorithm-Divide and Conquer] Tích 2 số nhị phân

Cho hai xâu nhị phân biểu diễn hai số. Nhiệm vụ của bạn là đưa ra tích của hai số.
Ví dụ với xâu S1="1100" và S2="1010" ta sẽ có kết quả là 120.

Input
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 hai xâu nhị phân S1, S2 được viết trên một dòng.
T, S1, S2 thỏa mãn ràng buộc: 1≤T≤100;1≤length(S1),length(S2)≤30.

Output
Đưa ra tích của mỗi test theo từng dòng.

Example

input
2
1100 01
01 01

output
12
1
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll Pow(int a, int b)
{
    ll res = 1;
    for (int i = 1; i <= b; i++)
        res *= a;
    return res;
}

ll convert(string s)
{
    ll res = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
        res += (s[i] - '0') * Pow(2, i);
    return res;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << convert(a) * convert(b) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}