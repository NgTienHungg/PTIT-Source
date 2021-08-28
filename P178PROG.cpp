// https://www.spoj.com/PTIT/problems/P178PROG/
// P178PROG - ROUND 8G - TRỘN XÂU

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        string a, b, c;
        cin >> a >> b >> c;
        int count = 0;
        bool check = 0;
        while (count < 50)
        {
            count++;
            string res = "";
            for (int i = 0; i < n; i++)
            {
                res.push_back(b[i]);
                res.push_back(a[i]);
            }
            if (res == c)
            {
                check = 1;
                break;
            }
            for (int i = 0; i < n; i++)
            {
                a = res.substr(0, n);
                b = res.substr(n);
            }
        }
        if (check == 0)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
    return 0;
}