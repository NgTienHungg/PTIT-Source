// https://www.spoj.com/PTIT/problems/P153SUMF/
// P153SUMF - ROUND 3F - Pangram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.resize(n);
    set<char> set(s.begin(), s.end());
    if (set.size() == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}