// https://code.ptit.edu.vn/student/question/DSA06037
// SẮP XẾP ĐOẠN CON

#include <bits/stdc++.h>
using namespace std;

struct Data {
    int fi; // value
    int se; // index before sort
    int th; // index after sort
};

bool cmp1(Data a, Data b) {
    if (a.fi == b.fi) return a.se < b.se;
    return a.fi < b.fi;
}

bool cmp2(Data a, Data b) {
    return a.se < b.se;
}

void testCase() {
    int n; cin >> n;
    vector<Data> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].fi;
        a[i].se = i;
    }
    sort(a.begin(), a.end(), cmp1);
    for (int i = 0; i < n; ++i) {
        a[i].th = i;
    }
    sort(a.begin(), a.end(), cmp2);

    vector<int> res;
    int max_idx = -1;
    for (int i = 0; i < n - 1; ++i) {
        max_idx = max(max_idx, a[i].th);
        if (max_idx == i) res.push_back(i + 1);
    }
    cout << res.size() << endl;
    for (int i : res) cout << i << " ";
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