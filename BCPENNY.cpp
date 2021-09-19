// https://www.spoj.com/PTIT/problems/BCPENNY/
// BCPENNY - Penny Game

#include <bits/stdc++.h>
using namespace std;

void check(string s, vector<int> &v)
{
    if (s == "TTT")
        v[0]++;
    if (s == "TTH")
        v[1]++;
    if (s == "THT")
        v[2]++;
    if (s == "THH")
        v[3]++;
    if (s == "HTT")
        v[4]++;
    if (s == "HTH")
        v[5]++;
    if (s == "HHT")
        v[6]++;
    if (s == "HHH")
        v[7]++;
}

void solve()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    vector<int> count(8, 0);
    for (int i = 0; i <= 37; i++)
    {
        string s2 = s.substr(i, 3);
        check(s2, count);
    }
    cout << t << " ";
    for (int i = 0; i < 8; i++)
        cout << count[i] << " ";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}