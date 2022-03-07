// https://code.ptit.edu.vn/student/question/DSA03010
// NỐI DÂY 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--) {
        int x; cin >> x;
        pq.push(x);
    }
    long long ans = 0;
    while (pq.size() >= 2) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}