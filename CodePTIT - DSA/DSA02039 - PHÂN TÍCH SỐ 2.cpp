// https://code.ptit.edu.vn/student/question/DSA02039
// PHÂN TÍCH SỐ 2

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void Try(int limit, int remain, vector<int> v) {
    if (remain == 0) {
        res.push_back(v);
        return;
    }
    for (int i = limit; i >= 1; --i) {
        if (remain >= i) {
            v.push_back(i);
            Try(i, remain - i, v);
            v.pop_back();
        }
    }
}

void TestCase() {
    res.clear();
    int n;
    cin >> n;
    Try(n, n, {});
    cout << res.size() << endl;
    for (auto v : res) {
        cout << "(";
        for (int i = 0; i < v.size() - 1; ++i) {
            cout << v[i] << " ";
        }
        cout << v.back() << ") ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}