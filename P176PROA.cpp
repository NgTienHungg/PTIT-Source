// https://www.spoj.com/PTIT/problems/P176PROA/
// P176PROA - ROUND 6A - Custom_Map’s Custom Name

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        str += (s + " ");
    }

    queue<string> q;
    q.push("");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        for (int i = 0; i < 26; ++i)
        {
            string tmp = s + alp[i];
            q.push(tmp);
            if (str.find(tmp) == -1)
            {
                cout << tmp;
                return 0;
            }
        }
    }
    return 0;
}

/* INPUT:
hocvien
hoanggia
ptit
banana
diamond
=> str = "hocvien hoanggia ptit banana diamond"
*/