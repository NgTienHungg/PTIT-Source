/*
A. [ProPTIT-Algorithm-Sinh kế tiếp] Xâu nhị phân kế tiếp

Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[].
Ví dụ X[] ="010101" thì xâu nhị phân tiếp theo của X[] là "010110".

Input
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
- T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤1e3.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
010101
111111

output
010110
000000
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t;
string s;

void init()
{
    cin >> s;
}

void solve()
{
    int l = s.length() - 1;
    while (l >= 0 && s[l] == '1')
        s[l--] = '0';
    if (l >= 0)
        s[l] = '1';
    cout << s << endl;
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
    }
    return 0;
}