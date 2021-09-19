// https://luyencode.net/problem/STACK
// STACK - Truy vấn với ngăn xếp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, x;
    cin >> T;
    stack<int> st;
    while (T--)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> x;
            st.push(x);
        }
        else if (n == 2)
        {
            if (!st.empty())
                st.pop();
        }
        else if (n == 3)
        {
            if (!st.empty())
                cout << st.top();
            else
                cout << "Empty!";
            cout << endl;
        }
    }
    return 0;
}