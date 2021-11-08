#include <bits/stdc++.h>
using namespace std;

int SumNum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long mau[20] = {0};
void prepare() {
    int fi = 1, se = 1;
    for (int i = 3; i <= 26; ++i) {
        int x = SumNum(fi) + SumNum(se);
        mau[x]++;
        fi = se, se = x;
    }
}

void TestCase() {
    long long n, q, l, r;
    cin >> n >> q;

    long long dd[20] = {0};
    long long time = (n - 2) / 24; // Cứ 24 số kể từ 2, dãy fibo lặp lại
    n -= time * 24;
    for (int i = 1; i < 20; ++i) {
        dd[i] = time * mau[i];
    }

    int fi = 1, se = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == 1 || i == 2) {
            dd[1]++;
            continue;
        }
        int x = SumNum(fi) + SumNum(se);
        dd[x]++;
        fi = se, se = x;
    }

    while (q--) {
        cin >> l >> r;
        long long cou = 0;
        for (int i = 1; i < 20; ++i) {
            if (i >= l && i <= r)
                cou += dd[i];
        }
        cout << cou << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}