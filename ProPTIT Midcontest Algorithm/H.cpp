// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/H
// H. Điện thoại

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v;

void New()
{
    int x;
    cin >> x;
    v.push_back(x);
    cout << "NEW\n";
}

void Read()
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);

    string s;
    while (cin >> s)
    {
        if (s == "END.")
            break;
        if (s == "1")
            New();
        else if (s == "2")
            Read();
    }
    return 0;
}