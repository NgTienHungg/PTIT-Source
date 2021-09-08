// https://code.ptit.edu.vn/student/question/CPP0429
// SỬA ĐÈN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    bool dd[n + 1] = {0};
    for (int i = 1; i <= b; ++i) {
        int x;
        cin >> x;
        dd[x] = 1;
    }

    int res = 1e9;
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (dd[i])
            q.push(i);
        if (!q.empty() && q.front() + k - 1 < i)
            q.pop();
        if (i >= k)
            res = min(res, (int)q.size());
    }
    cout << res;
    return 0;
}