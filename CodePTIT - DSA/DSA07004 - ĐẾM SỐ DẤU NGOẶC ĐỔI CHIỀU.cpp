// https://code.ptit.edu.vn/student/question/DSA07004
// ĐẾM SỐ DẤU NGOẶC ĐỔI CHIỀU

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<char> st;
    int open = 0, close = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            open++;
            st.push(s[i]);
        }
        else {
            if (!st.empty() && st.top() == '(') {
                open--;
                st.pop();
            }
            else {
                close++;
                st.push(s[i]);
            }
        }
    }
    int ans = open / 2 + close / 2; // mỗi cặp đóng mở ngoặc chỉ cần đảo ngược 1 dấu
    ans += open % 2 + close % 2; // nếu có cặp ngoặc trái hướng, cần đảo cả 2
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