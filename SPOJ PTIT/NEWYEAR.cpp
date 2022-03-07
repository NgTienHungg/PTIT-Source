// https://luyencode.net/problem/NEWYEAR
// NEWYEAR - Lời chúc tết

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);
    for (int i = 0; i < n; ++i)
        getline(cin, v[i]);

    set<string> s(v.begin(), v.end());
    cout << s.size();
    return 0;
}