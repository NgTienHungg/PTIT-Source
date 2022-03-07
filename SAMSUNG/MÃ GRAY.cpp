#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n;
    cin >> n;

    vector<string> v;
    v.push_back("0");
    v.push_back("1");

    for (int i = 2; i <= n; ++i) {
        int len = v.size();
        for (int j = len - 1; j >= 0; --j) {
            v.push_back(v[j]);
        }
        for (int j = 0; j < len; ++j) {
            v[j] = "0" + v[j];
        }
        for (int j = len; j < v.size(); ++j) {
            v[j] = "1" + v[j];
        }
    }
    for (auto x : v) {
        cout << x << " ";
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