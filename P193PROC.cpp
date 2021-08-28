// https://www.spoj.com/PTIT/problems/P193PROC/
// P193PROC - Problem C - Độ phức tạp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26); // Vector đếm số lần xh của các kí tự
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a']++;
    }

    sort(v.rbegin(), v.rend());
    stack<int> st;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
            break;
        st.push(v[i]);
    }

    int count = 0;
    while (st.size() > 2)
    {
        count += st.top();
        st.pop();
    }
    cout << count;
    return 0;
}