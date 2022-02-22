// https://www.spoj.com/PTIT/problems/P194SUMH/
// P194SUMH - Tích các chữ số

#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 10;
    stack<int> st;
    for (int i = 9; i >= 2; i--)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                st.push(i);
                n /= i;
            }
            if (n == 1)
                break;
        }
        if (i == 2 && n != 1)
            return -1;
    }
    int res = 0;
    while (!st.empty())
    {
        res = res * 10 + st.top();
        st.pop();
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}