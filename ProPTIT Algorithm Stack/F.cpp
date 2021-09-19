// https://codeforces.com/group/eFlt2UuXYv/contest/331978/problem/F
// F. [ProPTIT-Algorithm-Stack] Nhỏ hơn của lớn hơn.

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[n], gre[n], les[n];
    for (auto &x : a) {
        cin >> x;
    }

    stack<int> b, c; // Tìm số lớn hơn, nhỏ hơn đầu tiên bên phải
    for (int i = n - 1; i >= 0; --i) {
        // Tìm phần tử lớn hơn đầu tiên
        while (!b.empty() && a[b.top()] <= a[i]) {
            b.pop();
        }
        if (b.empty())
            gre[i] = -1;
        else
            gre[i] = b.top();
        b.push(i);

        // Tìm phần tử nhỏ hơn đầu tiên
        while (!c.empty() && a[c.top()] >= a[i]) {
            c.pop();
        }
        if (c.empty())
            les[i] = -1;
        else
            les[i] = c.top();
        c.push(i);
    }

    for (int i = 0; i < n; ++i) {
        if (gre[i] != -1 && les[gre[i]] != -1)
            cout << a[les[gre[i]]];
        else
            cout << -1;
        cout << " ";
    }
    return 0;
}