#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) cout << "0 ";
        else cout << "1 ";
    }
    cout << endl;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) cout << "0 ";
        else cout << "1 ";
    }
    return 0;
}