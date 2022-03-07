// https://www.spoj.com/PTIT/problems/P148PROA/
// P148PROA - ROUND 8A - Dãy số Hailstone

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        stack<int> st;
        st.push(n);
        while (st.top() != 1)
        {
            if (st.top() % 2 == 0)
                st.push(st.top() / 2);
            else
                st.push(st.top() * 3 + 1);
        }
        cout << st.size() << endl;
    }
    return 0;
}