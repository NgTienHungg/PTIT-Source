// https://code.ptit.edu.vn/student/question/DSA08010
// BIẾN ĐỔI SỐ TỰ NHIÊN

#include <bits/stdc++.h>
#define II pair<int, int>
using namespace std;

void TestCase() {
    int n; cin >> n;
    map<int, bool> dd;
    queue<II> q;
    q.push({n, 0});

    while (!q.empty()) {
        II x = q.front(); q.pop();
        if (x.first == 2) {
            cout << x.second + 1;
            return;
        }

        for (int i = 2; i <= sqrt(x.first); ++i) {
            if (x.first % i == 0 && !dd[ x.first/ i]) {
                dd[x.first / i] = true;
                q.push({x.first / i, x.second + 1});
            }
        }
        q.push({x.first - 1, x.second + 1});
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}