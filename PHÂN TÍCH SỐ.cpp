#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void Try(int limit, int remain, vector<int> v) {
    if (remain == 0) {
        cout << "(";
        for (int i = 0; i < v.size() - 1; ++i) {
            cout << v[i] << " ";
        }
        cout << v.back() << ") ";
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
    int n;
    cin >> n;
    Try(n, n, {});
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