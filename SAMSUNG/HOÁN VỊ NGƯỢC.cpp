#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, a[11];
bool Vs[11];

void print() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = n; j >= 1; --j) {
        if (!Vs[j]) {
            a[i] = j;
            Vs[j] = 1;
            if (i == n)
                print();
            else
                Try(i + 1);
            Vs[j] = 0;
        }
    }
}

void TestCase() {
    cin >> n;
    memset(Vs, 0, sizeof(Vs));
    Try(1);
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}