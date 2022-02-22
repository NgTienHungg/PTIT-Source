#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

vector<long long> v(1e6, 1);
void prepare() {
    for (int i = 2; i <= 1e6; ++i) {
        for (int j = 2 * i; j <= 1e6; j += i) {
            v[j] += i;
        }
    }
    v[0] = 0;
    for (int i = 1; i <= 1e6; ++i) {
        if (v[i] > i)
            v[i] = v[i - 1] + 1;
        else
            v[i] = v[i - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prepare();
    int a, b;
    cin >> a >> b;
    cout << v[b] - v[a - 1];
    return 0;
}