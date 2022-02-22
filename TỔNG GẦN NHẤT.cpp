#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, M, a[100];
    cin >> n >> M;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				int sum = a[i] + a[j] + a[k];
				if (sum <= M) {
					ans = max(ans, sum);
				}
			}
		}
	}
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}