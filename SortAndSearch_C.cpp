/*
C. [ProPTIT-Algorithm-Sort and Search] Bigger Number

Cho số nguyên dương a có N chữ số và số dãy s có M chữ số.
Chữ số ở vị trí j (1≤j≤M) của dãy s có thể chọn bất kì vị trí i (1≤i≤N) trong số a và thay thế bằng sj.
Mỗi chữ số của dãy s chỉ được thay thế không quá một lần.
Nhiệm vụ của bạn là hãy tìm cách thay sao cho số a đạt giá trị lớn nhất.
Bạn có thể không cần sử dụng tất cả các chữ số trong s.

Input
Dòng đầu chứa số nguyên dương T (1≤T≤100).
Dòng thứ 2 chứa dãy a có độ dài N (không bắt đầu bằng chữ số 0).
Dòng thứ 3 chứa dãy s có độ dài M
(1≤N,M≤1e5)

Output
Số a lớn nhất có thể thay thế được.

Example

input
2
9410652
54413
310660
48507326

output
9544653
876665
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t;
string s1, s2;

void init()
{
    cin >> s1 >> s2;
}

void solve()
{
    sort(s2.rbegin(), s2.rend());
    int idx = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < s2[idx])
            s1[i] = s2[idx++];
    }
    cout << s1 << endl;
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