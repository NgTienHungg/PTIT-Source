#include <bits/stdc++.h>
using namespace std;

void testCase() {
    pair<int, int> s, t;
    cin >> s.first >> s.second >> t.first >> t.second;
    int x = abs(s.first - t.first);
    int y = abs(s.second - t.second);
    cout << min(x, y) + abs(x - y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}