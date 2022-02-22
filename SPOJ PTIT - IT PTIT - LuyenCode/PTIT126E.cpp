// https://www.spoj.com/PTIT/problems/PTIT126E/
// PTIT126E - Bỏ phiếu

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    vector<int> v(4, 0); // v={Y,N,P,A}
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'Y')
            v[0]++;
        if (s[i] == 'N')
            v[1]++;
        if (s[i] == 'P')
            v[2]++;
        if (s[i] == 'A')
            v[3]++;
    }
    if (v[3] >= ceil((double)len / 2))
        cout << "need quorum" << endl;
    else if (v[0] == v[1])
        cout << "tie" << endl;
    else if (v[0] > v[1])
        cout << "yes" << endl;
    else if (v[0] < v[1])
        cout << "no" << endl;
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "#")
            break;
        solve(s);
    }
    return 0;
}