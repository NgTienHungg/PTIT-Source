// https://code.ptit.edu.vn/student/question/CPP0313
// LOẠI BỎ TỪ TRONG XÂU

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;
    vector<string> v;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != ' ')
        {
            int p = i;
            while (s[p] != ' ' && p < s.length())
                p++;
            v.push_back(s.substr(i, p - i));
            i = p;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] != x)
            cout << v[i] << " ";
    }
    return 0;
}