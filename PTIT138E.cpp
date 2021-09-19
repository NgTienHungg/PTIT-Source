// https://www.spoj.com/PTIT/problems/PTIT138E/
// PTIT138E - BÀI E - LÀM TRÒN SỐ

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int remember = 0;
    for (int i = s.length() - 2; i >= 0; i--)
    {
        // Tách từng cặp 2 chữ số cạnh nhau để làm tròn
        string tg = s.substr(i, 2);
        // Làm tròn
        int num = atoi(tg.c_str()) + remember;
        remember = 0; // Biến nhớ để nếu làm tròn 2cs thành 100 thì chỉ thay thế "00", cộng biến nhớ vào cs đằng trước
        num = 10 * round((double)num / 10);
        string tmp = to_string(num);
        if (tmp.length() == 1)
            tmp = "0" + tmp;
        if (tmp.length() == 3)
        {
            remember = 1;
            tmp.erase(0, 1);
        }
        // Thay thế tmp vào s
        s.replace(i, 2, tmp);
    }
    if (remember == 1)
        s = "1" + s;
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}