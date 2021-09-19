// https://www.spoj.com/PTIT/problems/PTIT121I/
// PTIT121I - Lặp lại các kí tự

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cs, r;
        string s;
        cin >> cs >> r >> s;
        cout << cs << " ";
        for (int i = 0; i < s.length(); i++)
            for (int j = 1; j <= r; j++)
                cout << s[i];
        cout << endl;
    }
    return 0;
}