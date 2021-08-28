// https://www.spoj.com/PTIT/problems/P181PROI/
// P181PROI - ROUND 1I - Đoạn mã nguy hiểm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i <= n - 3; ++i)
    {
        // Gặp 010 thì đổi thành 011
        string temp = s.substr(i, 3);
        if (temp == "010")
        {
            s[i + 2] = '1';
            count += 1;
            i += 2;
        }
    }
    cout << count;
    return 0;
}