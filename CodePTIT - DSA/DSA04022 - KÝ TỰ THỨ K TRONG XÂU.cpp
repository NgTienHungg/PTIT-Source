// https://code.ptit.edu.vn/student/question/DSA04022
// KÝ TỰ THỨ K TRONG XÂU

#include <bits/stdc++.h>
using namespace std;

vector<int> f(30);
void prepare() {
    f[1] = 1;
    for (int i = 2; i < 30; ++i) {
        f[i] = f[i - 1] * 2;
    }
}

void testCase() {
    int n, k;
    cin >> n >> k;
    for (int i = n; i >= 1; --i) {
        if (k > f[i]) k -= f[i];
        else if (k == f[i]) {
            cout << char(i - 1 + 'A');
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}