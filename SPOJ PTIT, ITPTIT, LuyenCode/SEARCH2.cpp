// https://luyencode.net/problem/SEARCH2
// SEARCH2 - Tìm kiếm nhị phân 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        it = lower_bound(a.begin(), a.end(), b[i]);
        if (it == a.end())
            cout << "0 ";
        else
        {
            int j = it - a.begin();
            if (a[j] == b[i])
                cout << j + 1 << " ";
            else
                cout << "0 ";
        }
    }
    return 0;
}