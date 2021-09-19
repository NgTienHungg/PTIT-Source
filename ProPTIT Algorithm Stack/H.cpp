// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/H
// H. [ProPTIT-Algorithm-Stack] Người nổi tiếng đi lạc.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;
    int a[n][n];
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        st.push(i);
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    while(st.size() > 1) {
        int p1 = st.top();
        st.pop();
        int p2 = st.top();
        st.pop();
        
        if (a[p1][p2] == a[p2][p1]) continue;
        if (a[p1][p2] == 0) st.push(p1);
        if (a[p2][p1] == 0) st.push(p2);
    }

    if (st.empty())
        cout << "No celebrity detected";
    else {
        for (int i = 0; i < n; ++i) {
            if (i == st.top())
                continue;
            if (a[st.top()][i] == 1 || a[i][st.top()] == 0) {
                cout << "No celebrity detected";
                return 0;
            }
        }
        cout << st.top() << " is celebrity";
    }
}