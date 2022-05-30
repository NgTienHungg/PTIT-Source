// https://code.ptit.edu.vn/student/question/DSA08012
// TÌM SỐ K THỎA MÃN ĐIỀU KIỆN

#include <bits/stdc++.h>
using namespace std;

vector<int> a;
bool vs[6];

void Try(int n) {
    a.push_back(n);
    for (int i = 0; i <= 5; ++i) {
        if (!vs[i]) {
            vs[i] = true;
            Try(n * 10 + i);
            vs[i] = false;
        }
    }
}

void Prepare() {
    a.push_back(0);
    for (int i = 1; i <= 5; ++i) {
        vs[i] = true;
        Try(i);
        vs[i] = false;
    }
    sort(a.begin(), a.end());
}

void TestCase() {
    int l, r;
    cin >> l >> r;
    int res = upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l);
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Prepare();
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}