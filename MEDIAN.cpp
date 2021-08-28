// https://luyencode.net/problem/MEDIAN
// MEDIAN - Truy vấn trung vị

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    stack<int> st;
    int id = 1;
    for (int i = 1; i <= m; ++i)
    {
        while (st.size() < n / 2)
            st.push(a[id++]);
        if (n % 2 == 1)
            st.push(a[id++]);
        cout << st.top() << " ";
        st.pop();
        n--;
    }
    return 0;
}