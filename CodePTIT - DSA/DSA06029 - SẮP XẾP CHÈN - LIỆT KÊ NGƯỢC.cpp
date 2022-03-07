// https://code.ptit.edu.vn/student/question/DSA06029
// SẮP XẾP CHÈN - LIỆT KÊ NGƯỢC

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for (int &i : a) cin >> i;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        vector<int> temp(a.begin(), a.begin() + i + 1);
        b.push_back(temp);
    }

    for (int i = b.size() - 1; i >= 0; --i) {
        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j < b[i].size(); ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
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