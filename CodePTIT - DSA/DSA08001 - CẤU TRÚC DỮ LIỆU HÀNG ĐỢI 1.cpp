// https://code.ptit.edu.vn/student/question/DSA08001
// CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int x;
    queue<int> q;
    while (n--) {
        cin >> x;
        if (x == 1)
            cout << q.size() << endl;
        else if (x == 2) {
            if (q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (x == 3) {
            cin >> x;
            q.push(x);
        }
        else if (x == 4) {
            if (!q.empty()) q.pop();
        }
        else if (x == 5) {
            if (q.empty()) cout << "-1\n";
            else cout << q.front() << endl;
        }
        else if (x == 6) {
            if (q.empty()) cout << "-1\n";
            else cout << q.back() << endl;
        }
    }
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