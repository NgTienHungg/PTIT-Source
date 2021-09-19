// https://www.spoj.com/PTIT/problems/BCNEPER/
// BCNEPER - Hoán vị kế tiếp

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int len = s.length();
    bool check = 0;
    int pos; // pos = position
    for (int i = len - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
        {
            pos = i;
            check = 1;
            break;
        }
    }
    cout << k << " ";
    if (check == 0 || len == 1)
        cout << "BIGGEST" << endl;
    else
    {
        string str = s.substr(pos);
        for (int i = str.length() - 1; i >= 1; i--)
        {
            if (str[i] > str[0])
            {
                swap(str[i], str[0]); // Tìm và đổi chữ số đầu tiên nhỏ hơn s[0] lên đầu, chính là hoán vị tiếp theo
                break;
            }
        }
        sort(str.begin() + 1, str.end()); // Sort lại str bắt đầu từ kí tự thứ 2
        s.replace(pos, str.size(), str);  // Thay thế str.size() kí tự từ vị trí pos của s bằng str
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}