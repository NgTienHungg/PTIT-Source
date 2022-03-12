// https://code.ptit.edu.vn/student/question/DSA07017
// PHẦN TỬ BÊN PHẢI NHỎ HƠN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1], gr[n + 1], le[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty()) gr[i] = -1;
        else gr[i] = st.top();
        st.push(i); // push index cua so lon hon dau tien ben phai cua a[i]
    }

    while (!st.empty()) st.pop(); // clear
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }
        if (st.empty()) le[i] = -1;
        else le[i] = st.top();
        st.push(a[i]); // push so nho hon dau tien ben phai cua a[i]
    }

    for (int i = 1; i <= n; ++i) {
        if (gr[i] == -1) cout << -1;
        else cout << le[gr[i]];
        cout << " ";
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