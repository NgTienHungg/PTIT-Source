// https://luyencode.net/problem/PTIT029
// PTIT029 - Ghép xích

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>>  pq;
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
        res = (res + x +y) % mod;
        pq.push(x + y);
    }
    cout << res;
    return 0;
}