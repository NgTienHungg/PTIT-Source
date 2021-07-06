/*
L. [ProPTIT-Algorithm-Sinh kế tiếp] Hoán vị tiếp theo của chuỗi số

Hãy viết chương trình nhận vào một chuỗi (có thể khá dài) các ký tự số và đưa ra màn hình hoán vị kế tiếp của các ký tự số đó (với ý nghĩa là hoán vị có giá trị lớn hơn tiếp theo nếu ta coi chuỗi đó là một giá trị số nguyên).
Chú ý: Các ký tự số trong dãy có thể trùng nhau.
Ví dụ: 123 -> 132
279134399742 -> 279134423799
Cũng có trường hợp sẽ không thể có hoán vị kế tiếp. Ví dụ như khi đầu vào là chuỗi 987.

Input
Dòng đầu tiên ghi số nguyên t là số bộ test (1 ≤ t ≤ 1000).
Mỗi bộ test có một dòng, đầu tiên là số thứ tự bộ test, một dấu cách, sau đó là chuỗi các ký tự số, tối đa 80 phần tử.

Output
Với mỗi bộ test hãy đưa ra một dòng gồm thứ tự bộ test, một dấu cách, tiếp theo đó là hoán vị kế tiếp hoặc chuỗi "BIGGEST" nếu không có hoán vị kế tiếp.

Example

input
3
1 123
2 279134399742
3 987

output
1 132
2 279134423799
3 BIGGEST
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T, t;
string s;

void init()
{
    cin >> t >> s;
}

void solve()
{
    cout << t << " ";
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        i--;
    if (i < 0)
        cout << "BIGGEST\n";
    else
    {
        for (int j = s.length() - 1; j > i; j--)
            if (s[j] > s[i])
            {
                swap(s[i], s[j]);
                break;
            }
        sort(s.begin() + i + 1, s.end());
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> T;
    while (T--)
    {
        init();
        solve();
    }
    return 0;
}