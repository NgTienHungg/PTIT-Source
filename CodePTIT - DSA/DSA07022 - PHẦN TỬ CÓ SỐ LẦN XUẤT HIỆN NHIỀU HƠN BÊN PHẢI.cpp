// https://code.ptit.edu.vn/student/question/DSA07022
// PHẦN TỬ CÓ SỐ LẦN XUẤT HIỆN NHIỀU HƠN BÊN PHẢI

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int> res(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && mp[st.top()] <= mp[a[i]]) {
            st.pop();
        }
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(a[i]);
    }
    for (int i = 0; i < n; ++i) {
        cout << res[i] << " ";
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