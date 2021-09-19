// https://www.spoj.com/PTIT/problems/P156PROE/
// P156PROE - ROUND 6E - Phép dịch

#include <bits/stdc++.h>
using namespace std;
string Alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

int main()
{
    int k;
    string s;
    while (cin >> k)
    {
        if (k == 0)
            break;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            s[i] = Alpha[(Alpha.find(s[i]) + k) % 28];
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}