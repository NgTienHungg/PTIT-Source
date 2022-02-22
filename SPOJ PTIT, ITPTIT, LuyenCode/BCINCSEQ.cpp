// https://www.spoj.com/PTIT/problems/BCINCSEQ/
// BCINCSEQ - Đoạn tăng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> qhd(n, 1); // Quy hoạch động
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
            qhd[i] = qhd[i - 1] + 1;
    }
    sort(qhd.rbegin(), qhd.rend());
    cout << qhd[0];
    return 0;
}