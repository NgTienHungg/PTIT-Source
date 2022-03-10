// https://code.ptit.edu.vn/student/question/DSA08005
// SỐ NHỊ PHÂN TỪ 1 ĐẾN N

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("1");
    while (n--) {
        string s = q.front();
        q.pop();
        cout << s << " ";

        q.push(s + "0");
        q.push(s + "1");
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