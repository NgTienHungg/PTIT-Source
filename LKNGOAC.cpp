// https://luyencode.net/problem/LKNGOAC
// LKNGOAC - Liệt kê cặp dấu ngoặc

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int id = 1;
    vector<pair<int, int>> v;

    stack<int> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
            st.push(id++);
        else
        {
            v.push_back(make_pair(st.top(), id++));
            st.pop();
        }
    }
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].first << " " << v[i].second << endl;
    return 0;
}