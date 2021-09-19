// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/G
// G. [ProPTIT-Algorithm-Queue] Chi tiêu hợp lý

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        pq.push(x);
    }

    long long res = 0;
    while (pq.size() >= 2) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        pq.push(x + y);
        res += x + y;
    }
    cout << res;
    return 0;
}