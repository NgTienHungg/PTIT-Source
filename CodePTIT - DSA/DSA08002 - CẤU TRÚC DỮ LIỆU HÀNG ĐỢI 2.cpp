// https://code.ptit.edu.vn/student/question/DSA08002
// CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    string s;
    int x;
    queue<int> q;
    while (n--) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            q.push(x);
        }
        else if (s == "POP") {
            if (!q.empty()) {
                q.pop();
            }
        }
        else {
            if (q.empty()) cout << "NONE";
            else cout << q.front();
            cout << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}